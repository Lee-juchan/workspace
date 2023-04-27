package ch07.Vehicle;

public class VehicleDemo {
    public static void main(String[] args) {
        Vehicle miniVan = new Vehicle(7, 80, 9);
        Vehicle sportCar = new Vehicle(2, 40, 12);

        int range_miniVan = miniVan.range();
        int range_sportCar = sportCar.range();

        System.out.printf("miniVan range : %d\n", range_miniVan);
        System.out.printf("sportCar range : %d\n", range_sportCar);
    }
}
