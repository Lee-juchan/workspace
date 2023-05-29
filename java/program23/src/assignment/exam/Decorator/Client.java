public class Client {
    public static void main(String[] args) {
        Display road = new RoadDisplay();
        // road.draw();

        // Display roadWithLane = new LaneDecorator(road);
        // roadWithLane.draw();

        Display total = new LaneDecorator(new TrafficDecorator(new LaneDecorator(road)));
        total.draw();
    }
}
