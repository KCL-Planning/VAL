(define (domain lights)
  (:requirements :conditional-effects)
  (:predicates
   (light-on ?r)
   (in ?r)
   (CONNECTED ?r ?rn)
   )

  (:action toggle-light
           :parameters (?room ?rightroom)
           :precondition (and
                          (CONNECTED ?room ?rightroom))
           :effect
           (when (light-on ?room)
             (and
              (not (light-on ?room))
              (when (in ?room) (and
                                (not (in ?room))
                                (in ?rightroom)))))))

;; Nested cond-effect is not allowed in the BNF definition of PDDL 3.1.
;; This issue is therefore invalid
;; 
;; <effect>       ::= (and <c-effect>*)                                              
;; <effect>       ::= <c-effect>                                                     
;; <c-effect>     ::=:conditional−effects (forall (<typed list (variable)>) <effect>)
;; <c-effect>     ::=:conditional−effects (when <GD> <cond-effect>)                 
;; <c-effect>     ::= <p-effect>                                                     
;; <p-effect>     ::= (not <atomic formula(term)>)                                   
;; <p-effect>     ::= <atomic formula(term)>                                         
;; <cond-effect>  ::= (and <p-effect>*)                                              
;; <cond-effect>  ::= <p-effect>                                                     
