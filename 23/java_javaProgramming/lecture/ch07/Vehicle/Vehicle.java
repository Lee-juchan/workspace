/*
    #lecture 07-01 / 23.04.28 leejuchan

    @brief : 탈 것 클래스 구현
    @details : 2개의 탈 것 만들어서, 주행거리 계산 후 출력하기 (Demo)
*/

package ch07.Vehicle;

public class Vehicle {
    // property
    private int passenger;
    private int fuelcap;
    private int mpg; // mile per gas

    // method
    public int range() {
        return fuelcap * mpg;
    }

    // constructor / overroding = 같은 이름, 다른 매개변수의 메소드, 생성자 가능
    public Vehicle() {
    }

    public Vehicle(int passenger, int fuelcap, int mpg) {
        this.passenger = passenger;
        this.fuelcap = fuelcap;
        this.mpg = mpg;
    }
}
