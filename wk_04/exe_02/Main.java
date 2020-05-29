class Main {

    public static void main(String[] args) {
      Main m = new Main();
      m.printCharsInString("This is an example string");
    }
  
    /*
    * Modify the method below so that it prints out each character in the string
    * on a new line.
    */
  
    public void printCharsInString(String s){
      System.out.println(s);
    }
  
    /*
    * Modify the method below so that it prints out
    * the string in reverse order
    */
  
    public void printStringInReverse(String s){
      System.out.println(s);
    }
  
    /*
    * Modify the method below so that it prints out
    * the string as all uppercase
    */
  
    public void printStringInUppercase(String s){
      System.out.println(s);
    }
  
    /*
    * Implement the method below which encrypts the
    * text passed in as an argument using a 
    * Ceaser cypher.  
    * 
    * https://en.wikipedia.org/wiki/Caesar_cipher
    * 
    * This is illustrated below 
    *
    * input string = "ABC"
    * shift by = 3
    * encrypted text = "DEF"
    */
    public String encryptText(String s, int shiftBy){
      return s;
    }
  
    /*
    * Implement the method below which decrypts a
    * Ceaser cypher encrypted message
    *
    */
  
    public String decryptText(String s, int shiftBy){
      return s;
    }
  
  }