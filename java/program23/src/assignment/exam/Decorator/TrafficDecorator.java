public class TrafficDecorator extends DisplayDecorator {

    public TrafficDecorator(Display decoratedDisplay) {
        super(decoratedDisplay);
    }

    public void drawTraffic() {
        System.out.println("\t교통량 표시");
    }

    @Override
    public void draw() {
        super.draw();
        drawTraffic();
    }
    
}
