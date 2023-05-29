/*
    #Basic / 23.04.13 leejuchan

    @brief : 변수
    @details : 1. variable ( var, let, const )
*/

// 1. 변수

var name = "Mike"; // 변수 선언
let age = 30;
const GENDER = "men"; // 대문자 지향

// let age = 20;         / let 재선언 x
// GENDER = "women";     / const 변경 x
// class = "math";       / 예약어 x

console.log(`var : ${name}`); // 변수 출력
console.log(`let : ${age}`);
console.log(`const : ${GENDER}`);