package lecture.ch08.Shape;

public abstract class Shape implements Paintable {
    protected String color;

    public void setColor(String color) {
        this.color = color;
    }
    
    public abstract void draw();
}
