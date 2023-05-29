package lecture.ch08.Shape.Impl;

import lecture.ch08.Shape.*;
import lecture.ch08.Shape.Impl.*;;


public class DrawPane {
    private Shape[] shapeList = null;

    public void addShape(Shape ...s) {
        this.shapeList = s;
    }

    public void draw() {
        for(Shape shape : shapeList) {
            shape.draw();
        }
    }

    public void paint() {
        
    }
}