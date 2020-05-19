#include <stdio.h>

/* 
 * Modify the function below so that it prints out the square multiplication 
 * tables for any number.  How might you modify this function, or add a new 
 * funtion, so it prints out the square multiplication tables for any range 
 * of numbers?
 */

void printRow(int n, int from, int to) {
    for (int i = from; i < to; i++) printf("%d\t", n * i);
    printf("\n");
}

void squareMultTable(int from, int to){
    for (int i = from; i < to; i++) printRow(i, from, to);
}

int main(void) {
    squareMultTable(6, 16);
    return 0;
}