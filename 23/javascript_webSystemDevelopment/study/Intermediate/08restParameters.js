// 나머지 매개변수

let showName = function (name) {
    console.log(name);
}

showName("Mike");
showName("Mike", "Tom"); //Mike 출력, js에서 넘겨받는 인수의 수는 제한이 없음
showName(); // undefined



// 함수의 인수 얻기 = arguments, 나머지 매개변수** (화살표함수는 arg..가 없음!)

// arguments
// 함수로 넘어온 모든 인수에 접근, 함수내에서 이용가능한 지역변수, 유사배열객체(length, index존재)

let showName1 = function (name) {
    console.log(arguments.length);
    console.log(arguments[0]);
    console.log(arguments[1]);
};
showName1("Mike", "Tom"); // 2 "Mike" "Tom" 출력
showName1(); // 0 undefined undefined


// 나머지 매개변수 : 정해지지 않은 개수의 인수를 배열로 나타냄
let showName2 = function (...names) {
    console.log(names);
};
showName2(); // []
showName2("Mike"); // ["Mike"]
showName2("Mike", "Tom"); // ["mike", "Tom"]


// ex1 전달된 모든 수를 더해야 함!
add = function (...numbers) {
    let result = 0;
    numbers.forEach((num) => result += num);
    console.log(result);
};

add(1, 2, 3); // 6
add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); // 55
// 나머지 매개변수 : 배열 -> 배열 메소드 사용가능!



// ex2 user객체를 만들어 주는 생성자 함수 //** 나머지 매개변수는 항상 마지막에 위치!
function User(name, age, ...skils) {
    this.name = name;
    this.age = age;
    this.skils = skils; // 배열 저장됨
}

const user1 = new User("Mike", 30, "HTML", "CSS");

const user2 = new User("Tom", 20, "React", "JS", "English");
console.log(user1);
console.log(user2);

// 전개구문 Spread syntax
//배열
let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6];

let result = [0, ...arr1, ...arr2, 7]; // [0,1,2,3,4,5,6,7]
// arr.push / splice, concat 넣고 뺴고 병합하는 작업 없이 간편!

// 객체
let user3 = { name: "Mike", age: 30 };
let user4 = { ...user3 }; // {name: "Mike", age: 30}

user4.name = "Tom";
console.log(user3);
console.log(user4);

// ex1 arr3을 [4,5,6,1,2,3] 으로

let arr3 = [1, 2, 3];
let arr4 = [4, 5, 6];

// 전개구문 없이
// arr4.reverse().forEach(num => arr3.unshift(num));
// console.log(arr3);

// 전개구문 사용
arr3 = [...arr4, ...arr3];
console.log(arr3);



// ex2 user에 프로퍼티 추가하기
let user = { name: "Mike" };
let info = { age: 30 };
let fe = ["JS", "React"];
let lang = ["Korean", "English"];

// 전개구문 없이
// user = Object.assign(
//     {},
//     info,
//     { skils: [] }
// );

// fe.forEach(item => user.skils.push(item));
// lang.forEach(item => user.skils.push(item));

user = {
    ...user,
    ...info,
    skils: [...fe, ...lang]
};