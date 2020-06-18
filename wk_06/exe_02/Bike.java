public class Bike {
    public Wheelset wheels;
    public Frameset frameset;
    public Groupset groupset;
    private static final Double UCI_LIMIT_WEIGHT = 6.8;
    private static final Double PI = 3.14159;

    public Bike(Wheelset wheels, Frameset frameset, Groupset groupset) {
        this.wheels = wheels;
        this.frameset = frameset;
        this.groupset = groupset;
    }

    public boolean IsValidBuild() {
        String w = this.wheels.GetUse();
        String f = this.frameset.GetUse();
        String g = this.groupset.GetUse();

        return w.equals(f) && w.equals(g);
    }

    public Double GetWeight() {
        return this.frameset.GetWeight() + this.groupset.GetWeight() + this.wheels.GetWeight();
    }

    public boolean IsUCILegal() {
        return this.GetWeight() > UCI_LIMIT_WEIGHT;
    }

    public void Spray(String Colour) {
        this.frameset.ResprayTo(Colour);
    }

    public int GetMaxPedalDistance() {
        Double wheelCirc = 2 * PI * (this.wheels.GetDiameter() / 2);
        return Double.parseDouble(this.groupset.GetUpperGearRatio()) * wheelCirc;
    }

}