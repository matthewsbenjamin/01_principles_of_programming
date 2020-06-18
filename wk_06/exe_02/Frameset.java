public class Frameset extends ComponentSet {
    // geometry
    private int Stack;
    private int Reach;
    private String Colour;

    public Frameset(int Stack, int Reach, String Colour) {
        super(IntendedUse, Weight, Make, Model);

        this.Stack = Stack;
        this.Reach = Reach;
        this.Colour = Colour;
    }

    // HEX
    public void ResprayTo(String Colour) {
        this.Colour = Colour;
    }

    public String GetColour() {
        return this.Colour;
    }

    public String GetGeometry() {
        return String.format("Stack:%d\tRech:%d\n", this.Stack, this.Reach);
    }
}