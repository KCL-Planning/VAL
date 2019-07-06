# VAL

## [Applications](applications/README.md)
## [Libraries](libraries/README.md)

## Developement

### Windows

  * Requirements:
    * [CMake](https://cmake.org/)
      * Include cmake in path for all users
    * [MinGW-w64](https://sourceforge.net/projects/mingw)
      * Install packages: mingw32-base, mingw32-gcc-g++
    * [Strawberry Perl](http://strawberryperl.com/) (required for GCC)
    * [LLVM](http://releases.llvm.org)
    * [Doxygen](http://www.doxygen.nl/download.html)

  * IDE:
    * [Visual Studio Code](https://code.visualstudio.com/)
      * Extensions:
        * [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)
        * [CMake tools](https://marketplace.visualstudio.com/items?itemName=vector-of-bool.cmake-tools)
        * [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
        * [C++ Intellisense](https://marketplace.visualstudio.com/items?itemName=austin.code-gnu-global)
        * [Clang-Format](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format)
      * Warning: You may require to restart your machine to be sure cmake, and gcc tools are identified by Visual Studio Code.
  
  * Scripts
    * [scripts/windows/build_win64_mingw.bat](scripts/windows/build_win64_mingw.bat): Build scripts for windows 64 bits using MinGW
      * Binaries can be found in `build/win64/mingw/Release|Debug/bin`
    * [scripts/windows/build_win64_eclipse_mingw.bat](scripts/windows/build_win64_eclipse_mingw.bat): Build scripts for windows 64 bits using MinGW and creating eclipse project definition.
      * Binaries can be found in `build/win64/eclipse_mingw/Release|Debug/bin`
      * Project can be imported in eclipse following the [instructions](https://www.mantidproject.org/Setting_up_Eclipse_projects_with_CMake).
    * [scripts/windows/build_win64_vs.bat](scripts/windows/build_win64_vs.bat): Build scripts for windows 64 bits using Visual Studio Compiler
      * Binaries can be found in `build/win64/vs/Release|Debug/bin`
    * [scripts/windows/setup_dlfcn-win32.bat](scripts/windows/setup_dlfcn-win32.bat): Build scripts to build dlfcn-win32 library for windows
      * Binaries can be found in `externals/dlfcn-win32/`
    * [scripts/windows/format.bat](scripts/windows/format.bat): Scripts to format the code
    * [scripts/windows/documentation.bat](scripts/windows/documentation.bat): Generate documentation

### Linux

  * Requirements:
    * Debian packages: cmake make g++ mingw-w64 flex bison
      * mingw-w64: For cross-compiling
      * flex, bison: For parser code regeneration

  * IDE:
    * [Visual Studio Code](https://code.visualstudio.com/)
  
  * Scripts
    * [scripts/linux/build_linux64.sh](scripts/linux/build_linux64.sh): Build scripts for linux 64 bits
      * Binaries can be found in `build/linux64/Release|Debug/bin`
    * [scripts/linux/build_win32.sh](scripts/linux/build_win32.sh): Build scripts for windows 32 bits
      * Binaries can be found in `build/linux_win32/Release|Debug/bin`
    * [scripts/linux/build_win64.sh](scripts/linux/build_win64.sh): Build scripts for windows 64 bits
      * Binaries can be found in `build/linux_win64/Release|Debug/bin`
    * [scripts/linux/documentation.sh](scripts/linux/documentation.sh): Generate documentation
    * [scripts/linux/format.sh](scripts/linux/format.sh): Scripts to format the code
    * [scripts/linux/setup_flex_bison.sh](scripts/linux/setup_flex_bison.sh): Build scripts to generate flex and bison header/implementation files from [libraries/VAL/src/Parser/pddl+.l](libraries/VAL/src/Parser/pddl+.l) and [libraries/VAL/src/Parser/pddl+.y](libraries/VAL/src/Parser/pddl+.y)
      * Sources files can be found in [libraries/VAL/src/Parser/pddl+.cpp](libraries/VAL/src/Parser/pddl+.cpp) and [libraries/VAL/src/Parser/pddl+.lex.yy.h](libraries/VAL/src/Parser/pddl+.lex.yy.h)

