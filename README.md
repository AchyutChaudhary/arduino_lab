# arduino_lab
5,6,7,8   motor control
12,13  ultrasonic

lm 32...motor control ic

the receiver connected to d4
ir sensor over a1-2-3-4 pins

zigbie for wireless

buggy moves forward in direction of ultrasonic!
5   8
6   7


considering that ir is high when it is upon black surface
LIR                    RIR                 function()
digital/analogue
0 / <50                      0 / <50                  forward()
1 / >100                     0 / <50                  left()
1                      1                   forward()
0                      1                   right()
given: 0-WHITE , 1-BLACK

