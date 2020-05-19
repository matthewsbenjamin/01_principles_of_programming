#include <stdio.h>

/*
 * Create a function that contains a local variable n.  Initialise this variable to 
 * 100 and print to the screen the value of n*n.  
 * 
 * Modify your code so that you can print out the result of this calculation
 * in the main function?  Do this both via a return in the function you have defined
 * and by using a global variable.
*/

int n = 100;

int square(int n) {

    printf("Square function: %d squared is %d\n", n, n * n);
    return n * n;
}

int main(void) {

    int res = square(n);

    printf("Main function: %d squared is %d\n", n, n * n);

    return 0;
                
}