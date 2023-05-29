/*
    #Intermediate / 23.04.15 leejuchan

    @brief : 변수
    @details : 0. 호이스팅, 변수 생성 과정
               1. variable ( var, let, const )
               2. 스코프 scope
*/

/*
    // 0-1. 호이스팅
    선언 : 호이스팅 o
    할당 : 호이스팅 x 


    // 0-2. 변수 생성 과정
    1) 선언
    2) 초기화
    3) 할당

    var : 12 + 3    (초기화 : undefined 할당)
    let : 1 + 2 + 3 (초기화 필수)
    const : 123     (선언시 할당 필수)


    // 2. 스코프
    var : 함수 스코프           // 함수만
    let, const : 블록 스코프    // if, for, 함수 등
*/


// 1. 변수
// 1-1. var
var name1 = "A";
var name1 = "B"; // 재선언 가능

console.log(name2); // undefined / 선언 전 사용 o
var name2 = "C";


// 1-2. let
let name3 = "A";
// let name3 = "B"; / 재선언 x

// console.log(name4); / 선언 전 사용 x (Temporal Dead Zone)
let name4 = "C";


// 1-3. const        (let 속성 + 상수)
// const PI;    / 선언, 할당 분리 x
// PI = 3.14;


// 2. 스코프
if(true) {
    var v1 = 1;
    let l1 = 2;
    const c1 = 3;
}
console.log(v1); // 블록 밖 o
// console.log(l1); / 블록 밖 x
// console.log(c1);
console.log("------------------");


function f1() {
    var v2 = 1;
    let l2 = 2;
    const c2 = 3;
}
// console.log(v2); / 함수 밖 x
// console.log(l2);
// console.log(c2);
console.log("------------------");