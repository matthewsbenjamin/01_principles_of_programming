#include <stdio.h>

void printHelloWorld(void);
void printXTenTimes(void);
void metricToImperial(int);
void convertMetricToImperialHeights(void);
void fibonacci(void);
void volumeOfACylinder(void);


/*
 *
 * https://repl.it/@bm441/Week1Lab1
 *  
*/

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  printXTenTimes();

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights();

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
    int x = 5;
    // hoping C will pass by value
    int xOrig = 5;
    // lots of ugly 
    x += 3;
    x *= 2;
    x -= 4;
    x -= (2 * xOrig);
    x += 3;

  printf("Result: %d\n", x);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(void){
    int x = 0;

    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);
    printf("X: %d\n", x ++);

}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */


void metricToImperial(int cm) {
    int feet;
    int inches = 100;

    const float CMTOINCH = 2.54;
    const int INCHTOFEET = 12;

    feet = cm / CMTOINCH / INCHTOFEET;
    inches = cm / CMTOINCH;
    inches = inches % INCHTOFEET;

    printf("%dcm is %d feet and %d inches\n", cm, feet, inches);

}

void convertMetricToImperialHeights(void){
    // CM to Feet & inches

    metricToImperial(101);
    metricToImperial(3);
    metricToImperial(15);
    metricToImperial(192);
    metricToImperial(124);

}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(void){

    int prev = 0;
    int curr = 0;
    int next = 1;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

    prev = curr;
    curr = next;
    next = prev + curr;
    printf("%d\n", curr);

 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(void){
    const float pi = 3.14159;
    float height, radius, volume;
    
    height = 7.0;
    radius = 4.0;
    volume = pi * radius * radius; 
    volume *= height;
    printf("height: %4.1fcm radius: %4.1fcm: volume %4.2fcm^3\n", height, radius, volume);
    
    height = 20.0;
    radius = 3.0;
    volume = pi * radius * radius; 
    volume *= height;
    printf("height: %4.1fcm radius: %4.1fcm: volume %4.2fcm^3\n", height, radius, volume);
    
    height = 14.7;
    radius = 5.2;
    volume = pi * radius * radius; 
    volume *= height;
    printf("height: %4.1fcm radius: %4.1fcm: volume %4.2fcm^3\n", height, radius, volume);


}