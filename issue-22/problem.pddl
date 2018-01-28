(define (problem p01)
(:domain lights)
(:objects
    room1
    room2
)
(:init
    (light-on room1)
    (in room1)
    (CONNECTED room1 room2)
)
(:goal (in room2))
)
