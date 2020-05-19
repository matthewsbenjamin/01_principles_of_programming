#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci(int term){
    int curr = 0;
    int next = 1;
    int prev = 0;

    for (int i = 0; i < term; i++) {
        prev = curr;
        curr = next;
        next = prev + curr;
    }
    return curr;
}

int main(void) {
  int res = fibonacci(6);
  printf("result: %d\n", res);
  return 0;
}