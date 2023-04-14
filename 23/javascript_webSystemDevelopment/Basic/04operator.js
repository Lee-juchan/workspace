/*
    Basic ch04 / 23.04.12 leejuchan

    @brief : 연산자
    @details : 산술 연산자()
*/

// 산술 연산자 : +, -, *, /, %, **
let numArr1 = [];

numArr1[0] = 3 + 2; // 5
numArr1[1] = 3 - 2; // 1
numArr1[2] = 3 * 2; // 6
numArr1[3] = 3 / 2; // 1.5
numArr1[4] = 3 % 2; // 1
numArr1[5] = 3 ** 2; // 9       / ** : 거듭제곱


// 증감 : ++, --
let num1 = 5;
num1++;
num1--;


// 복합대입 : +=, -=, *=, /=, %=, **=
let numArr2 = [5, 5, 5, 5, 5, 5];

numArr2[0] += 2; // 7
numArr2[1] -= 2; // 3
numArr2[2] *= 2; // 10
numArr2[3] /= 2; // 2.5
numArr2[4] %= 3; // 2
numArr2[5] **= 2; // 25


// 비교 연산자 : >, <, >=, <=, ==, !=, ===       / boolean형 반환
let data1 = 1;
let data2 = "1";
console.log(data1 == data2);  // true   / 동등 연산자
console.log(data1 === data2); // false  / 일치 연산자 (type까지 비교)
console.log("------------------------");


// 논리 연산자 : &&, ||, !          / 첫번째 조건만 확인함! -> 경우가 적은 조건부터 명시하면 굿

// OR (||)
console.log("- 이름이 A이거나 성인이면 통과");
let name1 = "B";
let age1 = 30;
let isAdult1 = age1 > 19;

if(name1 === "A" || isAdult1) { // true
    console.log("Ok");
} else {
    console.log("Nope");
}
console.log("------------------------");


// AND (&&)
console.log("- 이름이 A이고 성인이면 통과");
let name2 = "B";
let age2 = 30;
let isAdult2 = age2 > 19;

if(name2 === "A" && isAdult2) {
    console.log("OK");
} else {
    console.log("Nope");
}
console.log("------------------------");


// NOT !
console.log("- 성인이 아니면 탈락");
let age3 = 10;
let isAdult3 = age3 > 19;

if(!isAdult3) {
    console.log("Nope");
} else {
    console.log("OK");
}
console.log("------------------------");


// 우선순위 (&& ||)
console.log("- 남자이고, 이름이 A이거나 성인이면 통과");
let gender4 = "W";
let name4 = "B";
let isAdult4 = true;

if(gender4 === "M" && (name4 === "A" || isAdult4)) { // 괄호 없으면 true
    console.log("OK");
} else {
    console.log("Nope");
}