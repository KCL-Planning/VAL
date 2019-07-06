/************************************************************************
 * Authors:
 *
 * Maria Fox, Richard Howey and Derek Long - VAL
 * Stephen Cresswell - PDDL Parser
 *
 * This file is part of VAL, the PDDL validator.
 *
Copyright (c) 2003 owned by the authors listed above
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the FreeBSD Project.
 *
 ************************************************************************/
#include "DebugWriteController.h"
#include <iostream>

namespace VAL {

  void DebugWriteController::write_symbol(ostream &o, const symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_control_symbol(ostream &o,
                                                  const control_symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_const_symbol(ostream &o,
                                                const const_symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_class_symbol(ostream &o,
                                                const class_symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_var_symbol(ostream &o, const var_symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_pddl_typed_symbol(
      ostream &o, const pddl_typed_symbol *p) {
    p->display(indent);
  };

  void DebugWriteController::write_plus_expression(ostream &o,
                                                   const plus_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_minus_expression(ostream &o,
                                                    const minus_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_mul_expression(ostream &o,
                                                  const mul_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_div_expression(ostream &o,
                                                  const div_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_uminus_expression(
      ostream &o, const uminus_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_int_expression(ostream &o,
                                                  const int_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_float_expression(ostream &o,
                                                    const float_expression *p) {
    p->display(indent);
  };

  void DebugWriteController::write_special_val_expr(ostream &o,
                                                    const special_val_expr *p) {
    p->display(indent);
  };

  void DebugWriteController::write_func_term(ostream &o, const func_term *p) {
    p->display(indent);
  };

  void DebugWriteController::write_class_func_term(ostream &o,
                                                   const class_func_term *p) {
    p->display(indent);
  };

  void DebugWriteController::write_assignment(ostream &o, const assignment *p) {
    p->display(indent);
  };

  void DebugWriteController::write_goal_list(ostream &o, const goal_list *p) {
    p->display(indent);
  };

  void DebugWriteController::write_simple_goal(ostream &o,
                                               const simple_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_qfied_goal(ostream &o, const qfied_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_conj_goal(ostream &o, const conj_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_disj_goal(ostream &o, const disj_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_timed_goal(ostream &o, const timed_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_imply_goal(ostream &o, const imply_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_neg_goal(ostream &o, const neg_goal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_comparison(ostream &o, const comparison *p) {
    p->display(indent);
  };

  void DebugWriteController::write_proposition(ostream &o,
                                               const proposition *p) {
    p->display(indent);
  };

  void DebugWriteController::write_pred_decl_list(ostream &o,
                                                  const pred_decl_list *p) {
    p->display(indent);
  };

  void DebugWriteController::write_func_decl_list(ostream &o,
                                                  const func_decl_list *p) {
    p->display(indent);
  };

  void DebugWriteController::write_pred_decl(ostream &o, const pred_decl *p) {
    p->display(indent);
  };

  void DebugWriteController::write_func_decl(ostream &o, const func_decl *p) {
    p->display(indent);
  };

  void DebugWriteController::write_simple_effect(ostream &o,
                                                 const simple_effect *p) {
    p->display(indent);
  };

  void DebugWriteController::write_forall_effect(ostream &o,
                                                 const forall_effect *p) {
    p->display(indent);
  };

  void DebugWriteController::write_cond_effect(ostream &o,
                                               const cond_effect *p) {
    p->display(indent);
  };

  void DebugWriteController::write_timed_effect(ostream &o,
                                                const timed_effect *p) {
    p->display(indent);
  };

  void DebugWriteController::write_supplied_effect(ostream &o,
                                                   const supplied_effect *p) {
    p->display(indent);
  }

  void DebugWriteController::write_timed_initial_literal(
      ostream &o, const timed_initial_literal *p) {
    p->display(indent);
  };

  void DebugWriteController::write_effect_lists(ostream &o,
                                                const effect_lists *p) {
    p->display(indent);
  };

  void DebugWriteController::write_operator_list(ostream &o,
                                                 const operator_list *p) {
    p->display(indent);
  };

  void DebugWriteController::write_derivations_list(ostream &o,
                                                    const derivations_list *d) {
    d->display(indent);
  };

  void DebugWriteController::write_derivation_rule(ostream &o,
                                                   const derivation_rule *d) {
    d->display(indent);
  };

  void DebugWriteController::write_operator_(ostream &o, const operator_ *p) {
    p->display(indent);
  };

  void DebugWriteController::write_action(ostream &o, const action *p) {
    p->display(indent);
  };

  void DebugWriteController::write_event(ostream &o, const event *p) {
    p->display(indent);
  };

  void DebugWriteController::write_process(ostream &o, const process *p) {
    p->display(indent);
  };

  void DebugWriteController::write_durative_action(ostream &o,
                                                   const durative_action *p) {
    p->display(indent);
  };

  void DebugWriteController::write_class_def(ostream &o, const class_def *p) {
    p->display(indent);
  };

  void DebugWriteController::write_domain(ostream &o, const domain *p) {
    p->display(indent);
  };

  void DebugWriteController::write_metric_spec(ostream &o,
                                               const metric_spec *p) {
    p->display(indent);
  };

  void DebugWriteController::write_length_spec(ostream &o,
                                               const length_spec *p) {
    p->display(indent);
  };

  void DebugWriteController::write_problem(ostream &o, const problem *p) {
    p->display(indent);
  };

  void DebugWriteController::write_plan_step(ostream &o, const plan_step *p) {
    p->display(indent);
  };

  void DebugWriteController::write_preference(ostream &o, const preference *p) {
    p->display(indent);
  };

  void DebugWriteController::write_constraint_goal(ostream &o,
                                                   const constraint_goal *cg) {
    cg->display(indent);
  };

  void DebugWriteController::write_violation_term(ostream &o,
                                                  const violation_term *vt) {
    vt->display(indent);
  };

};  // namespace VAL
