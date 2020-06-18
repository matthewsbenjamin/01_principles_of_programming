public class Groupset extends ComponentSet {
    // gears
    // cranklength
    private int MinRange;
    private int MaxRange;
    private int Chainring;
    private static final int CrankLength = 175;

    public Groupset(int MinRange, int MaxRange, int Chainring) {
        super(indendedUse, weight, make, model);

        this.MinRange = MinRange;
        this.MaxRange = MaxRange;
        this.Chainring = Chainring;
    }

    public int GetUpperGearRatio() {
        return this.Chainring * this.MaxRange;
    }

    public int GetLowerGearRatio() {
        return this.Chainring * this.MinRange;
    }

    public int GetCrankLength() {
        return CrankLength;
    }

}