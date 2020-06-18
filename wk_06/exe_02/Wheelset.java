import java.util.InputMismatchException;

public class Wheelset extends ComponentSet {
    // diameter
    // 
    private int Diameter;
    private static final int ROAD_DIAMETER = 624;
    private static final int MTB_DIAMETER = 559;


    public Wheelset() throws InputMismatchException {
        super(indendedUse, weight, make, model);

        if (super.intendedUse == String.valueOf("MTB")) {
            this.Diameter = ROAD_DIAMETER;
        } else if (super.intendedUse == String.valueOf("ROAD")) {
            this.Diameter = ROAD_DIAMETER;
        } else {
            throw new InputMismatchException("Wheel type must be MTB or ROAD");
        }
    }

    public int GetDiameter() {
        return this.Diameter;
    }
}