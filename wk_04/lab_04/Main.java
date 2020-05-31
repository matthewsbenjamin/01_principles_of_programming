/* 
 * Lab Sheet 4
 */

/* Question 1
 Make a BankAccount Class. This Class should provide a constructor, three mutators and three accessors of the type that a bank account might need. 
 
 In the Main class (i.e. this class) create two different BankAccount instances from its main method (i.e. two BankAccount objects). Demonstrate the use of your mutators and accessors within that same main method.
*/

public class Main {
    public static void main(final String[] args) {
        BankAccount treasury = new BankAccount(0, 100000, "~ Treasury ~");
        BankAccount a = new BankAccount(0, 1000, "Alex' debit account");
        BankAccount b = new BankAccount(0, 500, "Boris' debit account");

        // Money has to come from somewhere
        // setting treasury w. loads of cash
        treasury.Balance(1000);

        treasury.TransferTo(a, 50);
        treasury.TransferTo(b, 50);

        a.TransferTo(b, 10);
        b.TransferTo(treasury, 10);
        b.TransferTo(a, 10);

        System.out.println("Final Balances:");
        System.out.printf("\t%s: £%f\n", treasury.AccName(), treasury.Balance());
        System.out.printf("\t%s: £%f\n", a.AccName(), a.Balance());
        System.out.printf("\t%s: £%f\n", b.AccName(), b.Balance());
    }
}