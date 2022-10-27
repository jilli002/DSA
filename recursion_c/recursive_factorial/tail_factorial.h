/* factorial implementation
input: n positive integer greater than or equal to 1
output: positive integer x the product of 1*2*3*...*n-1*n

algorithm:
    idea: is to start accumulating the product of i-th term in the
    consecutive increasing sequence of length n into the placeholder
    x of the next call.

    1. define the factorial function to be f: n-->x such that
    2. if n == 1 then return x
        else return to step 1. with n <-- n-1 , x <-- n * x
*/

#ifndef TAIL_FACTORIAL_H
#define TAIL_FACTORIAL_H

int factorial(int);
int factorial_func(int, int);

#endif