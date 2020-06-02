
/*
 * Implement the methods below.
 */ 

class Main {
  public static void main(String[] args) {
    System.out.println("Hello world!");
    Main m = new Main();
    System.out.println(m.isModThree(4));
    System.out.println(m.multiply(10, 15));
    System.out.println(m.fib(5));
  }

  // Method which returns true if a number is divisible by 3 and  
  // false if it is not.  Hint: use the modulo (%) operator.
  public boolean isModThree(int n){
    return n % 3 == 0;
  }

  // Recursive method which performs multiplication of two 
  // numbers without using the inbuilt * sign
  public int multiply(int n, int by){
      if (by <= 1) {
        return n;
    }

    return n + multiply(n, by -1 );
  }

  /*
   * Complete the fibonacci method below such that it calculates the 
   * nth term of the Fibonacci sequence using iteration.
   * 
   * The first 4 terms of the Fibonacci sequence in this example 
   * are  1, 1, 2, 3
   *
   * For example if we call fibonacci(1) we should get the value 1 returned,
   * if we call fibonacci(4) we should get the value 3 returned. 
   */
  public int fib(int term){
    int prev = 0;
    int curr = 1;
    int next = 1;

    for (int i = 0; i < term; i++) {
      prev = curr;
      curr = next;
      next = prev + curr;
    }
    return curr;
  }
}