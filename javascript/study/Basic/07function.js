/*
    Basic / 23.04.12 leejuchan

    @breif : 함수
    @details : 1. function (parameter o|x, return)
               2. 함수 선언식|표현식
               3. 화살표 함수
*/

//1. function

// 1-1-1. parameter x
function showError() {
    console.log("Error, Try again!");
}
showError();
console.log("-----------------");


// 1-1-2. parameter o
function sayHello(name) {
    let msg = "Hello"
    if (name) {             // name != undefined 인 경우
        msg += `, ${name}`;
    }
    console.log(msg);
}

sayHello();
sayHello("Ljc");
console.log("-----------------");


// 1-1-3. parameter default

// OR
function sayHi(name) {
    let newName = name || "friend"; // 인자가 없으면 friend로
    let msg = `Hello, ${newName}`;
    console.log(msg);
}
sayHi();
sayHi("Ljc");


// default value
function sayHi(name = "friend") { // 인자가 없으면 default값 출력
    let msg = `Hello, ${name}`;
    console.log(msg);
}
sayHi();
sayHi("Ljc");
console.log("-----------------");


// 1-2. return
function add(num1, num2) {
    return num1 + num2;
}
console.log(`add(2, 3) = ${add(2, 3)}`);
console.log(`showError() = ${showError()}`); // void함수 = undefined 반환
console.log("-----------------");


// 2. 함수 선언문, 표현식

// 선언문 : 어디서든 호출 가능 (호이스팅)
sayGood();
function sayGood() {
    console.log("Good");
}

// 표현식 : 등장 이후로만 호출 가능
// sayBad();
let sayBad = function () {
    console.log("Bad");
}
sayBad();
console.log("-----------------");


// 3. 화살표 함수 (arrow function)
// ex1
let printA = () => console.log("A");
printA();

// ex2
let printNumber = number => {   // 매개변수 하나면, 괄호 생략 가능
    let msg = `Number is ${number}`;
    console.log(msg);
}
printNumber(3);

// ex3
let multi = (num1, num2) => num1 * num2; // return문 한줄이면, return 생략 가능
console.log(multi(2, 3));