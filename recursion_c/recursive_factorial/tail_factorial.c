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
#include "tail_factorial.h"

int factorial(int n) {return factorial_func(n, 1);}

int factorial_func(int n, int x)
{
    if(n == 1) return x;
    return factorial_func(n-1, n * x);
}
