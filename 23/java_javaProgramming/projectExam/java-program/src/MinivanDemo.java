public class MinivanDemo {
    public static void main(String[] args){
        Minivan minivan1 = new Minivan(7, 16, 21);
        minivan1.showPayments();

        minivan1.init(3, 10);
        minivan1.showPayments();
    }
}