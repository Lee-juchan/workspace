var Rectangle = function (width, height) {
    this.width = width;
    this.height = height;
};

Rectangle.prototype.getArea = function () {
    return this.width * this.height;
};


var Square = function (width) {
    Rectangle.call(this, width, width);
};

Square.prototype = new Rectangle(); // prototype으로 넣어줌 (유사 상속)

var sq = new Square(5);
console.log(sq);