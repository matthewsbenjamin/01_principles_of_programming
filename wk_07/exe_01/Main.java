/*
 * Implement the DequeueInterface. It functionality is described in the
 * comments
 *
 * You should demonstrate the use of this data structure 
 * in the main method below
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html#add-int-E-
 */ 

class Main {
  public static void main(String[] args) {

  Dequeue q = new Dequeue();

  q.printDequeue();

  q.addFront(2);
  q.printDequeue();

  q.addFront(4);
  q.printDequeue();

  q.addRear(6);
  q.printDequeue();
  
  q.addFront(8);
  q.printDequeue();

  q.removeRear();
  q.printDequeue();

  q.removeRear();
  q.printDequeue();

  q.removeFront();
  q.printDequeue();

  q.removeRear();
  q.printDequeue();

  }
}