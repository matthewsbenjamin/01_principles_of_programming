#include <stdio.h>

  /* 
  * Lab Sheet 3
  */

  /* Question 1
  
  Complete the function below which converts a hexadecimal string into its decimal value. (Do not use a C standard library function.) 

  The main function calls this function with an example hexadecimal value. Change this value to test your program.
  */

int hexToDec(char hex[]){
  return 22;
}

/* Question 2
 Complete the function below that print out a tree shape such as the following: 

    *
   ***
  *****
 *******
*********
   ***
   ***
   ***
   ***

  Note you can (and probably should) implement additional functions to help.

  You can assume that the width of the tree will be odd and hence every line will have an odd number of asterisks. The trunk will always have a width of three.

  Call this function from the main to test your program.
*/


void printTrunk( int width, int trunkLength) {
    width = (width - 2) / 2;
    for (int i = 0; i < trunkLength; i++) {
        for (int i = 0; i < width; i++) {
            printf(" ");
        }
        printf("***\n");
    }
}

void printLeaves(int width, int length) {
  int asterisks = 1;
  int whitespace = width / 2;

  while (whitespace >= 0) {
    // print the whitespace
    for (int i = whitespace; i > 0; i--) {
      printf(" ");
    }

    // print the asterisks
    for (int i = 0; i < asterisks; i++) {
      printf("*");
    }
    asterisks += 2;
    whitespace --;
    printf("\n");
  }
}

void printTree(int width, int trunkLength){
  
  printLeaves(width, trunkLength);
  printTrunk(width, trunkLength);
}

int main(void) {
  char hex[4] = "FF3";
  printf("The hex value %s is %d in decimal\n", hex, hexToDec(hex));


  printTree(7, 4);
  return 0;
}