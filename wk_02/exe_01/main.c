#include <stdio.h>
#include <math.h>

/*
 * Using the math.h library (imported already), 
 * 
 * 1. Complete the pow3 function below so that takes as an argument a double and 
 * returns that value raised to the power of 3 
 * (hint use the pow function in the math library)
 *
 * 2. Create a function that takes as an argument a double and return the natural log 
 * of that value.  
 *
 * Demonstrate your functions by calling them the main function and printing out the
 * values returned 
*/

double pow3(double value){
  return pow(value, 3);
}

double naturalLog(double value) {
    return log(value);
}

int main(void) {

    double i, j, I, J;

    i = 3;
    I = pow3(i);
    printf("%2.2f cubed is %2.2f\n", i, I);
  
    j = 3.777;
    J = naturalLog(j);
    printf("The natural logarithm of %2.2f is %2.2f\n", j, J);
    return 0;
}