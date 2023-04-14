/*
    Basic / 23.04.13 leejuchan

    @brief : 자료형
    @details : string, number, boolean, null|undefined  / typeof
*/

// string 문자형
let str1 = "Mike";
let str2 = 'Make';
let str3 = `Maze`;
let str4 = `I'm ${str1}`; // 백틱 기호 (``) : 문자열 내부에서 변수 사용
let str5 = 3 + str1 + str2 + str3; // 문자열 합치기 (+)

console.log(`string : ${str1}, ${str2}, ${str3}, ${str4}, ${str5}`);
console.log("------------------------");


// Number 숫자형
let num1 = 10;
const PI = 3.14;
let num3 = 3/0;     // Infinity
let num4 = str1/3;  // NaN : Not a Number

console.log(`number : ${num1}, ${PI}, ${num3}, ${num4}`); 
console.log("------------------------");      


// Boolean
let bool1 = true;
let bool2 = false;

console.log(`boolean : ${bool1}, ${bool2}`);
console.log("------------------------");  


// undefined, null
let data1;          // undefined
let data2 = null;   // null

console.log(`null, undefined : ${data1}, ${data2}`);
console.log("------------------------");  


// typeof : 변수 타입 확인
let type1 = typeof str1;    //string
let type2 = typeof num1;    // number
let type3 = typeof bool1;   // boolean
let type4 = typeof data1;   // undefined
let type5 = typeof data2;   // null = object (사실 오류임!)

console.log(`typeof : ${type1}, ${type2}, ${type3}, ${type4}, ${type5}`);
console.log("------------------------");  