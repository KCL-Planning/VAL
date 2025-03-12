// Copyright 2019-2025 - University of Strathclyde, King's College London, Schlumberger Ltd and SIFT, LLC
// This source code is licensed under the BSD license found in the LICENSE file in the root directory of this source tree.

#include "FlexLexer.h"
#include "ptree.h"
#include <cstdio>
#include <fstream>
#include <iostream>

extern int yyparse();
extern int yydebug;

void usage();

static bool failOnBadInput = 0;

using std::ifstream;
using std::ofstream;

namespace VAL {

  extern parse_category *top_thing;

  extern analysis an_analysis;
  extern analysis *current_analysis;

  extern yyFlexLexer *yfl;

};  // namespace VAL

extern char *current_filename;

using namespace VAL;

/**
 * This expects any number of filenames as arguments, although
 * it probably doesn't ever make sense to supply more than two.
 */
int main(int argc, char *argv[]) {
  current_analysis = &an_analysis;
  ifstream *current_in_stream;
  yydebug = 0;  // Set to 1 to output yacc trace

  yfl = new yyFlexLexer;

  int argcount = 1;

  // Parse command line options (extensible)
  while (argcount < argc && argv[argcount][0] == '-') {
    switch (argv[argcount][1]) {
    case 'x':
      failOnBadInput = true;
      ++argcount;
      break;
    default:
      cout << "Unknown option: " << argv[argcount] << "\n";
      usage();
      exit(1);
    }
  }

  // Loop over given args
  for (int a = argcount; a < argc; ++a) {
    current_filename = argv[a];
    cout << "File: " << current_filename << '\n';
    current_in_stream = new ifstream(current_filename);
    if (current_in_stream->bad()) {
      // Output a message now
      cout << "Failed to open\n";

      // Log an error to be reported in summary later
      line_no = 0;
      log_error(E_FATAL, "Failed to open file");
    } else {
      line_no = 1;

      // Switch the tokeniser to the current input stream
      yfl->switch_streams(current_in_stream, &cout);
      yyparse();

      // Output syntax tree
      if (top_thing) top_thing->display(0);
    }
    delete current_in_stream;
  }
  // Output the errors from all input files
  current_analysis->error_list.report();
  delete yfl;
  if (failOnBadInput && current_analysis->error_list.errors > 0) {
    return 1;
    }
  return 0;
}


void usage() {
  cout << "Parser: The PDDL+ plan parsing tool\n"
       << "Version 4: Validates continuous effects, events and processes.\n"
       << "\nAuthors: Derek Long, Richard Howey, Stephen Cresswell and Maria "
          "Fox\n"
       << "https:://github.com/KCL-Planning/VAL\n\n"
       << "Usage: Parser [options] domainFile problemFile planFile1 ...\n"
       << "Options:\n"
       << "    -x         -- Fail with non-zero exit code if the input fails to parse.\n";
};
