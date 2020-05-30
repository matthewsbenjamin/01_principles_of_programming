class Main {

    public static void main(String[] args) {
      Main m = new Main();
      m.printCharsInString("This is an example string");
      m.printStringInReverse("This is a reverse string");
      m.printStringInUppercase("I am not angry");
      String x = m.encryptText("ABC", 28);
      String y = m.decryptText(x, 28);
      System.out.printf("%s Encrypted is: %s\n","ABC", x);
      System.out.printf("%s Decrypted is: %s\n", x, y);
    }
  
    /*
    * Modify the method below so that it prints out each character in the string
    * on a new line.
    */
  
    public void printCharsInString(String s){
      for (int i = 0; i < s.length(); i++) {
        System.out.println(s.charAt(i));
      }
      System.out.println("\n~~~~\n");
    }
  
    /*
    * Modify the method below so that it prints out
    * the string in reverse order
    */
  
    public void printStringInReverse(String s){
      for (int i = s.length(); i > 0; i--) {
        System.out.println(s.charAt(i -1 ));
      }
      System.out.println("\n~~~~\n");
    }
  
    /*
    * Modify the method below so that it prints out
    * the string as all uppercase
    */
  
    public void printStringInUppercase(String s){
      System.out.println(s.toUpperCase());
      System.out.println("\n~~~~\n");
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

    private char encryptCharacter(char c, int shiftBy) {
      // add shiftBy to the index of c
      int index;
      int newIndex;
      if (c >= 97 && c < 123) {
        // lowercase
        index = c - 97;
        newIndex = (index + shiftBy) % 26;
        newIndex += 97;
        return (char)newIndex;
      } else if (c >= 65 && c < 90) {
        // uppercase
        index = c - 65;
        newIndex = (index + shiftBy) % 26;
        newIndex += 65;
        return (char)newIndex;
      } else {
        return ' ';
      }
    }

    public String encryptText(String s, int shiftBy){
      char[] output = new char[s.length()];

      for (int i = 0; i < s.length(); i++) {
        char x = encryptCharacter(s.charAt(i), shiftBy);
        output[i] = x ;
      }
      String outputString = new String(output);
      return outputString;
    } 
  
    /*
    * Implement the method below which decrypts a
    * Ceaser cypher encrypted message
    *
    */
  
    public String decryptText(String s, int shiftBy){
      return encryptText(s, 26 - shiftBy);
    }
  
  }