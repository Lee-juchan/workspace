/*
    #Basic / 23.04.13 leejuchan

    @brief : 변수
    @details : var, let, const
*/

// 변수 선언
var name = "Mike";
let age = 30;
const GENDER = "men"; // 대문자 지향

// let age = 20;         / let 재선언 x
// GENDER = "women";     / const 변경 x
// class = "math";       / 예약어 x


// 변수 출력
console.log(`var : ${name}`);
console.log(`let : ${age}`);
console.log(`const : ${GENDER}`);