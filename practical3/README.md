Computing the area under the curve of f (x) where x ∈ [a, b] can be done using the Trapezodial
rule

The integral is changed into a sum, using the values of the function at certain points. Increasing
the number of points increases the accuracy.

Find the integral of f (x) = tan(x) from 0 →
π/3. 
1. So a = 0 and b =π/3.
2. Get the firt part of the sum tan(0) + tan(
π/3). For C use tan which is part of the maths
library. You used the maths library in the last practical for Conversion.c. tan is available in
FORTRAN by default.
3. Create a loop that generates 11 equidistant points between 0 →
π/3. Thus N = 12 and
x0 = a = 0 and x12 = b =
π/3.
4. Change the loop so that you are adding 2 tan(xi) for the each of the 11 points.
5. Add that sum to that of the end points and multiply by b−a
2N .
6. Compare this against log(2) you should not be too far out.
c© ICHEC PH502 Practical 3 Page 2 of 2