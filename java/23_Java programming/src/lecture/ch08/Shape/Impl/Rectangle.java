package lecture.ch08.Shape.Impl;

public class Rectangle extends Shape {
    Point[] points = new Point[4];

    public Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        points[0] = new Point(x1, y1);
        points[1] = new Point(x2, y2);
        points[2] = new Point(x3, y3);
        points[3] = new Point(x4, y4);
    }

    @Override
    public void draw() {
        System.out.println("< -- Rectangle -- >\n");
        for (int i = 0; i < points.length; i++) {
            System.out.printf("p%d = (%d, %d)\n", i + 1, points[i].x, points[i].y);
        }
    }
}
