#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/ 

bool divisibleByThreeOrFive(int);

int main(void) {
  
    int test = 0;
    bool res;
    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);
    test ++;    
    res = divisibleByThreeOrFive(test);

    return 0;
}


bool divisibleByThreeOrFive(int n) {
    if (n <= 0) {
        printf("Zero is indivisible\n");
        return false;
    }

    if (n % 15 == 0) {
        printf("%d is divisible by 3 and 5\n", n);
        return true;
    } else if (n % 5 == 0) {
        printf("%d is divisible by 5 but not 3\n", n);
        return true;
    } else if (n % 3 == 0) {
        printf("%d is divisible by 3 but not 5\n", n);
        return true;
    }
    printf("%d is not divisible by 3 or 5\n", n);
    return false;
}

