public class BankAccount {

    private double balance;
    private double creditLimit;
    private String accName;

    public BankAccount(final double bal, final double cl, final String accName) {
        this.balance = bal;
        this.creditLimit = cl;
        this.accName = accName;
        return;
    }

    private boolean LimitDetect(final double amount) {

        // check whether transaction will exceed min/max double values
        // not certain this works because of loss of information in the division step
        double balUpper = this.balance / Double.MAX_VALUE;
        double balLower = this.balance / Double.MIN_VALUE;
        double amt = amount / Double.MAX_VALUE;

        final boolean overflow = (balUpper + amt) > 1.0;
        final boolean underflow = (balLower + amt) < -1.0;
        
        if (overflow) {
            System.out.println("\tError: Transaction will exceed upper balance limits");
            return true;
        }
        
        if (underflow) {
            System.out.println("\tError: Transaction will exceed lower  balance limits");
            return true;
        }
        
        
        return false;
    }
    
    private boolean CreditCheck(double amount) {
        final boolean creditLimitReached = (this.balance - amount) < -this.creditLimit;
        if (creditLimitReached) {
            System.out.println("\tCredit limit would be exceeded with this transaction.\n\tPlease add more funds to continue");
            return true;
        }
        return false;
    }

    public double Balance() {
        return this.balance;
    }

    public void Balance(int amt) {
        this.balance = amt;
    }

    public String AccName() {
        return this.accName;
    }

    private void TransactionHeader() {
        System.out.printf("\n###################\nTransaction for account: %s\n", this.accName);
    }

    private void Credit(final double transaction) {
        this.balance -= transaction;
        return;
    }

    private void Debit(final double transaction) {
        this.balance += transaction;
        return;
    }

    public void TransferTo(BankAccount otherSide, double amount) {
        this.TransactionHeader();
        System.out.printf("\tTransaction to: %s\n", otherSide.accName);

        if (LimitDetect(amount) || otherSide.LimitDetect(amount)) {
            System.out.println("\tLimit detection failed");
            return;
        }

        if (this.CreditCheck(amount)) {
            return;
        }

        if (amount > 0) {
            this.Credit(amount);
            otherSide.Debit(amount);
        } else {
            System.out.println("\tAmount transferred cannot be less than zero");
        }

        System.out.printf("\tTransaction for £%f accepted\nYour balance is £%f\n", amount, this.balance);
    }
}