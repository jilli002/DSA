#include "tail_factorial.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int n;
    if(argc == 2) n = atoi(argv[1]);
    printf("The factorial of %d is:\n%d! = %d\n", n, n, factorial(n));
    return 0;
}