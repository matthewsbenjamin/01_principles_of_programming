#include <stdio.h>
#include <string.h>

/* 
 * Modify the function below so that it copies the string from string1 into
 * string2 and prints out string2 in reverse.
 */

char string2[11];

void copyAndPrintArray(char string1[]){
    int n = 0;
    for (int i = strlen(string1) - 1; i >= 0; i--) {
        string2[n] = string1[i];
        n ++;
    }
    printf("String2 is: %s\n", string2);
}

int main(void) {
  char string1[11] = "my message";
  copyAndPrintArray(string1);
  return 0;
}