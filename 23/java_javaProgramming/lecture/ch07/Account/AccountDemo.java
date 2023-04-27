package ch07.Account;

public class AccountDemo {
    public static void main(String[] args) {
        Account ac1 = new Account("12-34", "A", 100l);
        Account ac2 = new Account("23-45", "B", 200l);
        Account ac3 = new Account("34-56", "C", 300l);

        System.out.println("Account Information");
        ac1.printAccountInformation();
        ac2.printAccountInformation();
        ac3.printAccountInformation();
    }
}
