import java.util.ArrayList;

public class Dequeue {

    private ArrayList<Object> dequeue;

    public Dequeue() {
        this.dequeue = new ArrayList<>();
    }

    public void addFront(Object o) {
        this.dequeue.add(o);
    }

    public void addRear(Object o) {
        this.dequeue.add(0, o);
    }

    public Object removeFront(){
        return this.dequeue.remove(0);
    }
    
    public Object removeRear(){
        return this.dequeue.remove(this.dequeue.size()-1);
    }

    public void printDequeue(){
        int size = dequeue.size();
        for(int i = 0; i < size - 1; i++){
            System.out.print(String.format("%d ", dequeue.get(i)));
        }
        System.out.println();
    }
}