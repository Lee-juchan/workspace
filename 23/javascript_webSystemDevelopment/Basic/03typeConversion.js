/*
    Basic ch03 / 23.04.13 leejuchan

    @brief : 타입변환
    @details : String(), Number(), Boolean()
*/

// String() : 다른타입 -> string
let str1 = String(3);
let str2 = String(false);
let str3 = String(undefined);

console.log(`String() : ${str1}, ${str2}, ${str3}`);
console.log("------------------------");


// Number() : 다른타입 -> number
let num1 = Number("1234");
let num2 = Number("12aa");  // NaN
let num3 = Number(false);   // 0
let num4 = Number(true);    // 1

console.log(`Number() : ${num1}, ${num2}, ${num3}, ${num4}`);
console.log("------------------------");


// Boolean() : 다른타입 -> boolean
let bool1 = Boolean(0);     // false : 0, "", null, undefined, NaN
let bool2 = Boolean(123);   // true : 이외 모두

console.log(`Boolean() : ${bool1}, ${bool2}`);
console.log("------------------------");


/*
    *주의 사항*
    Number(null) == 0
    Number(undefined) == NaN

*/ 