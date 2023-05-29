/*
    #Intermediate / 23.04.15 leejuchan

    @brief : 객체
    @details : 생성자 함수, computed prorperty, methods
*/

// 1. 생성자 함수 : 객체 다수 생성

let p1 = {      // 객체 리터럴 -> 다수 생성 불편
    name : "A",
    age : 10,
}
let p2 = {
    name : "B",
    age : 20,
}

function Person(name, age) { // 생성자 함수   / 첫 글자 대문자

    // this = {};   / new로 호출시 추가

    this.name = name;
    this.age = age;
    this.sayName = function() {
        console.log("name : " + this.name);
    }

    // return this;
}

let p3 = new Person("C", 30); // 다수 생성 편리
let p4 = new Person("D", 40);

p3.sayName(); // C
console.log("---------------");


// ex1-1 : 상품 객체 생성
let Item = function(title, price) { // 생성자 함수

    this.title = title;
    this.price = price;
    this.showPrice = function() {
        console.log(`price : ${this.price}`);
    }
}

let item1 = new Item("A", 1000); // 객체 생성

console.log(item1); // 객체 출력
item1.showPrice(); // 메소드 출력
console.log("---------------");



// 2. computed property
let x = "age";

let p5 = {
    name : "E",
    [x] : 60,   // age : 60
    [2 + 3] : 5,
    ["H" + "I"] : "greet",
};

console.log(p5);
console.log("---------------");

// ex2-1
let n = "name";
let a = "age";

let user = {
    [n] : "A", // computed 프로퍼티
    [a] : 10,
    [1+3] : 4,
};
console.log(user);
console.log("---------------");

// ex2-2
let makeObj = function(key, value) { // 원하는 키, 값으로 객체 리턴하는 함수
    return {
        [key] : value,
    }
}
let obj = makeObj("name", "obj");
console.log(obj);
console.log("---------------");


// 3. 객체 methods

// 3-1. Object.assign() : 객체 복제

let p1Clone1 = p1; // 객체 복제 x (주소 복사 -> 같은 객체)
console.log(p1Clone1 === p1); // true

let p1Clone2 = Object.assign({}, p1); // 객체 복제 o
console.log(p1Clone2 === p1); // false
console.log("---------------");


let p1Clone3 = Object.assign({gender : "M"}, p1); // 초기값 할당
console.log(p1Clone3);

let p1Clone4 = Object.assign({age : 999}, p1); // 덮어쓰기 999 -> 10
console.log(p1Clone4);

let info1 = {weight : 50};
let info2 = {height : 180};
let p1Clone5 = Object.assign(p1, info1, info2); // 여러 객체 합치기

console.log(p1 == p1Clone5); // true    / p1에 덮어쓰기 됨, 주의!!

console.log(p1Clone5);
console.log("---------------");


// 3-2-1. Object.keys() : 키 배열 반환
let p1Keys = Object.keys(p1);
console.log(p1Keys);

// 3-2-2. Object.values() : 값 배열 반환
let p1Values = Object.values(p1);
console.log(p1Values);

// 3-2-3. Object.entries() : 키&값 배열 반환
let p1Entries = Object.entries(p1);
console.log(p1Entries);


// 3-2-3. Object.fromEntries : 키&값 배열 -> 객체 반환
p1Object = Object.fromEntries(p1Entries);
console.log(p1Object);
console.log("---------------");

//ex3-2-3-1
let arr = [
    ["A", 1],
    ["B", 2]
]
let arrObj = Object.fromEntries(arr);
console.log(arrObj);
console.log("---------------");