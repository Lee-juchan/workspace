package ch07.Dice;

public class DiceDemo {
    public static void main(String[] args) {
        Dice d1 = new Dice();
        Dice d2 = new Dice();
        
        int sum = d1.roll() + d2.roll();
        System.out.printf("sum : %d + %d = %d\n", d1.getFaceValue(), d2.getFaceValue(), sum);
    }
}
