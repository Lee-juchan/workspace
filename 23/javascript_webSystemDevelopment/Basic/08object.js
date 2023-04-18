/*
    Basic / 23.04.13 leejuchan

    @brief : 객체
    @details : 1. 객체 object
               2. 프로퍼티 property (접근 ( ., [""] ), 추가, 삭제 ( delete ), 단축 프로퍼티 / in, for...in)
               3. 메소드 method (this 메소드|화살표 함수)
*/

//1. object
let person = {
    name: "clark", // 프로퍼티 
    age: 33,
};


// 2. property (key : value)       / 쉼표로 구분

// 2-1-1. 속성 접근 : ., [" "]
console.log(person.name);
console.log(person["age"]);

console.log("-----------------");

// 2-1-2. 속성 추가
person.gender = "M";

console.log(person);
console.log("-----------------");

// 2-1-3. 속성 삭제 : delete
delete person.gender;

console.log(person);
console.log("-----------------");


// 2-2. 단축 프로퍼티
let createPerson = (name, age) => {
    return {                        // 익명객체? 반환
        name, //  name : name,
        age,  // age : age,
    }
};

let ljc = createPerson("ljc", 22);
console.log(ljc);
console.log("-----------------");



// 2-3. 프로퍼티 존재 여부 : in
console.log("age" in ljc);
console.log("birthday" in ljc);

console.log("-----------------");


// ex1

// person의 성인 여부 판단함수
let isAdult = function (person) {
    if (("age" in person) && person.age > 19) { // user에 age가 있고 성인이면 true
        return true;
    }
    return false;
};

// 객체 생성
let p1 = {
    name: "A",
    age: 30,
};
let p2 = {
    name: "B",
};

console.log(`Is p1 adult? : ${isAdult(p1)}`);
console.log(`Is p2 adult? : ${isAdult(p2)}`); // p2.age === undefined
console.log("-----------------");



// 2-4. 객체 for ... in : 객체의 키를 출력 (출력 타입 : String)
let p3 = {
    name: "C",
    age: 20,
};

for (let key in p3) { // 키, 값 출력
    console.log(`p3[${key}] : ${p3[key]}`);
}
console.log("-----------------");



// 3. method

// 3-1. 메소드의 this : 호출 객체
let p4 = {
    name: "D",
    showName: function () {
        console.log(`name : ${this.name}`);
    }
};
p4.showName(); // D
console.log("-----------------");


// 3-2. 화살표 함수의 this       / 메소드 내부, 화살표 함수 지양
let p5 = {
    name: "E",
    sayThis: () => {
        console.log(`this : ${this}`);
    }
};
p5.sayThis(); // 모듈객체
console.log("-----------------");


// ex1
let greet = function () {
    let msg = `Hello, I'm ${this.name}`; // 메소드  this = 호출한 객체   
    console.log(msg);                    // 화살표 함수 this = 외부의 this
};

let boy = {
    name: "Mike",
    greet,
};
let girl = {
    name: "Jane",
    greet,
};

boy.greet();
girl.greet();