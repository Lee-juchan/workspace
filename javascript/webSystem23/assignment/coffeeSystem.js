// 커피 생성자
const Coffee = function () {
    this.name = "Coffee";
    this.shot = 1;
    this.price = 3000;
};

Coffee.prototype.addShot = function (times) {
    this.shot += times;
    this.price += times * 500;
};


// 라떼 생성자 (라떼 <- 커피)
const Latte = function () {
    this.constructor();     // 커피 생성자 호출 ( this.__proto__.constructor())

    this.name = "Latte";
    this.milk = 1;
    this.price = 3500;
};
Latte.prototype = new Coffee(); // 라떼 <- 커피

Latte.prototype.addMilk = function (times) {
    this.milk += times;
    this.price += times * 500;
};


// 달고나 라떼 생성자 (달고나 라떼 <- 라떼 <- 커피)
const DalgonaLatte = function () {
    this.constructor();     // 라떼 생성자 호출 ( this.__proto__.constructor() )

    this.name = "DalgonaLatte";
    this.dalgona = 1;
    this.price = 4000;
};
DalgonaLatte.prototype = new Latte(); // 달고나 라떼 <- 라떼

DalgonaLatte.prototype.addDalgona = function (times) {
    this.dalgona += times;
    this.price += times * 500;
};


let myCoffee = new DalgonaLatte();
myCoffee.addShot(1);
myCoffee.addMilk(2);
myCoffee.addDalgona(3);

console.log(myCoffee);