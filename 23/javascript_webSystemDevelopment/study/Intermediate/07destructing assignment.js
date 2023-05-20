/*
    #Intermediate / 23.05.20 leejuchan

    @brief : 구조 분해 할당 : 배열, 객체 분해 -> 변수에 할당
    @details : 1. 배열
               2. 객체
*/

// 배열 구조 분해
let [x, y] = [1, 2]; // x=1, y=2

let users = ["Mike", "Tom", "Jane"];
let [user1, user2, user3] = users;
// let user1 = users[0]; 동일한 기능
// let user2 = users[1];
// let user3 = users[2];

// 문자열 (split)
let str = "Mike-Tom-Jane";
let [user4, user5, user6] = str.split("-");


// 기본값
let [a, b, c] = [1, 2]; // c=undefined
let [d=4,e=5,f=6] = [1,2]; // 기본값 설정

// 일부 반환값 무시
let [user7, ,user8] =  ["Mike", "Tom", "Jane"]; // Tom은 건너뜀

//바꿔치기

let a1 = 1;
let b1 = 2;

// let temp = a1; 기존 방식 = 임시변수 필요
// a1 = b1;
// b1 = temp;

[a1, b1] = [b1, a1];
console.log(a1, b1);


// 객체 구조 분해

let user = {name: 'Mike', age: 30};
let {name, age} = user;
// let {age, name} = user; 순서 상관 없음

// let name = user.name; 같은 기능
// let age = user.age;


// 새로운 변수 이름으로 할당
let user = {name: 'Mike', age: 30};
let {name: userName, age: userAge} = user;


// 기본값
let user = {name: 'Mike', age: 30};
let {name, age, gender} = user; // gender = undefined
let {name, age, gender = "male"} = user; // 기본값


