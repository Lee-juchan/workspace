public class Minivan {
    private int passengers; // 승객 수
    private int fuelcap; // 소모한 연료의 양
    private final int mpg = 21; // mile per gasoline, 마일당 연료 소모량

    // 하위호환성을 위해서, 변경후에도 남겨둠 (차차 삭제)
    public Minivan(int passengers, int fuelcap, int mpg) {
        init(passengers, fuelcap);
    }

    public Minivan(int passengers, int fuelcap) {
        init(passengers, fuelcap);
    }

    public void init(int passengers, int fuelcap) {
        this.passengers = passengers;
        this.fuelcap = fuelcap;
    }

    private int getDistance() {
        return fuelcap * mpg;
    };

    private int getPayments() {
        return getDistance() * passengers;
    }

    public void showPayments() {
        System.out.printf("Passenger : %d, Distance : %d\n", passengers, getDistance());
        System.out.println("Distance : " + getPayments());
    }

}