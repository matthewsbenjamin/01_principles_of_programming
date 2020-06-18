public class ComponentSet {
    private String Description;
    private String IntendedUse;
    private Double Weight;
    private String Make;

    public ComponentSet(String IntendedUse, Double Weight, String Make) {
        this.IntendedUse = IntendedUse;
        this.Weight = Weight;
        this.Make = Make;
    }

    public String GetDescription() {
        return this.Description;
    }

    public String GetUse() {
        return this.IntendedUse;
    }

    public String GetMake() {
        return this.Make;
    }

    public Double GetWeight() {
        return this.Weight;
    }

}
