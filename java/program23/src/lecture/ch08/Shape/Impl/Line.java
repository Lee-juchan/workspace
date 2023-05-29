package lecture.ch08.Shape.Impl;

import lecture.ch08.Shape.Point;

public class Line extends Shape {
    public Point[] points = new Point[2];

    public Line(Point p1, Point p2) {
        points[0] = p1;
        points[1] = p2;
    }

    @Override
    public void draw() {
        System.out.printf("< -- %s -- >\n", this.getClass().getName());
        for(int i=0; i<points.length; i++) {
            System.out.printf("p%d = (%d, %d)\n", i+1, points[i].getX(), points[i].getY());
        }
    }
    
}
