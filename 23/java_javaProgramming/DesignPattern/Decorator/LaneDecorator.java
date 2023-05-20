public class LaneDecorator extends DisplayDecorator {

    public LaneDecorator(Display decoratedDisplay) {
        super(decoratedDisplay);
    }

    public void drawLine() {
        System.out.println("\t차선 표시");
    }

    @Override
    public void draw() {
        super.draw();
        drawLine();
    }
    
}