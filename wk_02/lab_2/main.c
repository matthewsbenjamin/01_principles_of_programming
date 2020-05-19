#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* 
 * Lab Sheet 2:
 */

/* Question 1: 
 
 Complete the function below which takes in an integer input between zero and one hundred (0 ≤ n ≤ 100) and prints out the number expressed in English text, with spaces and no dashes (–), e.g. for the number “33”, we would expect to see “thirty three”. Hint: you may want to create additional functions to help.
 
 Call this function from the main to test your program.
 */

const char * tensToString(int n) {

    switch (n / 10) {
        case 9:
            return "nintey ";
        case 8:
            return "eighty ";
        case 7:
            return "seventy ";
        case 6:
            return "sixty ";
        case 5:
            return "fifty ";
        case 4:
            return "fourty ";
        case 3:
            return "thirty ";
        case 2:
            return "twenty ";
        case 1: 
            // Teens are dealt with at the unit stage
            return "";
        case 0:
            return "";
        default:
            return "";
    }

}

const char * unitsToString(int n) {

    if (n < 20 && n > 10) {
        switch(n % 10) {
            case 1:
                return "eleven";
            case 2:
                return "twelve";
            case 3:
                return "thirteen";
            case 4:
                return "fourteen";
            case 5:
                return "fifteen";
            case 6:
                return "sixteen";
            case 7:
                return "seventeen";
            case 8:
                return "eighteen";
            case 9:
                return "nineteen";
            case 0:
                return "";
            default:
                return "";
        }
    } 


    switch(n % 10) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        case 0:
            return "";
        default:
            return "";
    }
}

void numberToText(int value){
    if (value == 100) {
        printf("One hundred\n");
        return;
    }
    if (value == 0) {
        printf("zero\n");
        return;
    }
    if (value > 100 || value < 0) {
        printf("value is out of bounds\n");
        return;
    }
    printf("%s%s\n", tensToString(value), unitsToString(value));
    return;
}

/* Question 2: 
 
 Complete the function below that calculates, and returns, the distance between two points.
 
 Call this function from the main to test your program. Hint: may wish to use the following print statement in your main function, or similar: 

 printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
 */

double calculateDistance(int x1, int y1, int x2, int y2) {
    double a = pow(x1 - x2, 2);
    double b = pow(y1 - y2, 2);
    return (double)sqrt(a + b);
}

/* Question 3: 
 
 Complete the function below that is given an integer, n, where 1 ≤ n ≤ 9999 and prints whether it is even, odd, or/and prime.  The output should be whole sentences for example, 

 1 is odd and not prime.
 2 is even and prime.
 3 is odd and prime.
 4 is even and not prime.
 5 is odd and prime
 
 Call this function from the main to test your program.
 */

bool isEven(int n) {
    return n % 2 == 0 ? true : false;
}

bool isPrime(int n) {
    
    // TODO ensure n >=3
    if (n <= 2) {
        return false;
    }

    for (int i=2; i < n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printOddEvenAndOrPrime(int n){
    if (n <=1 || n >= 9999) {
        printf("N is too big or small\n");
        return;
    }

    bool prime, even;

    even = isEven(n);
    // no need to run isPrime() if the number is even
    prime = even ? false : isPrime(n);

    if (prime && !even) {
        printf("%d is odd and prime\n", n);
    } 

    if (!prime && even) {
        printf("%d is even and not prime\n", n);
    } 
    return;
}

int main(void) {

    numberToText(1);
    numberToText(2);
    numberToText(9);
    numberToText(0);
    numberToText(100);
    numberToText(101);
    
    printOddEvenAndOrPrime(9);
    printOddEvenAndOrPrime(13);
    printOddEvenAndOrPrime(20);
    printOddEvenAndOrPrime(37);
    printOddEvenAndOrPrime(9999);
    
    printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
    printf("%1.2f\n", calculateDistance(0, 0, 4, 9));
    printf("%1.2f\n", calculateDistance(0, -5, 16, 99));
    
    return 0;
}