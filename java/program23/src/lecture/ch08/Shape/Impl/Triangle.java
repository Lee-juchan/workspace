package lecture.ch08.Shape.Impl;

// public class Triangle extends Shape {
public class Triangle extends Line {
    private Point[] points = new Point[3];

    // public Triangle(Point p1, Point p2, Point p3) {
    //     points[0] = p1;
    //     points[1] = p2;
    //     points[2] = p3;
    // }

    public Triangle(Point p1, Point p2, Point p3) {
        super(p1, p2);
        points[2] = p3;
    }

    @Override
    void draw() {
        System.out.printf("< -- %s -- >\n", this.getClass().getName());
        for (int i = 0; i < points.length; i++) {
            System.out.printf("p%d = (%d, %d)\n", i + 1, points[i].getX(), points[i].getY());
        }
    }
}
