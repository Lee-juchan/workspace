/*
    #Intermediate / 23.04.15 leejuhcna

    @brief : string 관련 함수
    @details : 1. 문자열 처리 ( toUpperCase, toLowerCase / indexOf / slice, substring, substr / trim, repeat )
               2. 문자열 비교 ( codePointAt(), fromCodePoint() )
*/

// 백틱 ``
let s1 = `aaaaaaaa
aaaaaaaaaaaaaa
aaaaaaaaa.`; // 여러 줄 포함 가능
console.log(s1);
console.log("---------------------");


// String
let s2 = "Hello";

let s2Length = s2.length; // length
let s2Value = s2[2]; // 인덱스 접근
s2[2] = "X"; // 한글자 변경 불가

console.log(s2Length, s2Value, s2);
console.log("---------------------");


// 1.문자열 처리
// 1-1. .toUpperCase(), .toLowerCase()
let s2Upper = s2.toUpperCase();
let s2Lower = s2.toLowerCase();
console.log(s2Upper, s2Lower);
console.log("---------------------");


// 1-2. indexOf(" ") : 문자가 처음 나오는 인덱스 반환 (없으면 -1)
let s3 = "Hi guys. Nice to meet you.";

let idx1 = s3.indexOf("to"); // 14
let idx2 = s3.indexOf("man"); // -1
console.log(idx1, idx2);


if(s3.indexOf("Hi") > -1) {
    console.log("Hi : included!");
}
console.log("---------------------");


// 1-3. .slice(n,m) : n<= <m 사이 문자열 반환
let s4 = "  Hello!  ";

let s4Slice = s4.slice(2,4); // He
console.log(s4Slice);

// 1-4. .substring(n,m) : slice와 동일 (+ n,m 바꿔도 동작)
let s4Substring = s4.substring(4,2); // He
console.log(s4Substring);

// 1-5. .substr(n,m) : n부터 m개의 문자열 반환 (deprecated)
let s4Substr = s4.substr(2,3); // Hel
console.log(s4Substr);

// 1-6. .trim() : 앞뒤 공백 제거
let s4Trim = s4.trim(); // Hello!
console.log(s4Trim);

// 1-7. .repeat(n) : n번 문자열 반복
let s4Repeat = s4.repeat(2); //   Hello!    Hello!
console.log(s4Repeat);
console.log("---------------------");



// 2. 문자열 비교 (ASCII 코드값)

// 2-1. .codePointAt(idx) : 해당 인덱스의 문자 -> ASCII변환
let s5 = "ABC";
let s5Ascii = s5.codePointAt(2); // 67 (C)
console.log(s5Ascii);

// 2-2. String.fromCodePoint(n) : n값 (ASCII) -> 문자변환
let s5Str = String.fromCodePoint(67); // C = 67
console.log(s5Str);
console.log("---------------------");


//ex1-1
// 목차의 문자만 뽑아내기
let list = [
    "01. Introduce",
    "02. History of JS",
    "03. Datatype",
    "04. Function",
    "05. Array"
];

let newList = [];

for (let i=0; i<list.length; i++) {
    newList.push(list[i].slice(4));
}

console.log(newList);
console.log("---------------------");


// ex1-2
// 금칙어 : bad
let hasBad = function(str) {
    if(str.indexOf("bad") > -1) { // if ( str.includes("bad") )
        console.log("Nope");
    } else {
        console.log("OK");
    }
}
hasBad("It's a nice day"); // -1
hasBad("It's a bad day");
hasBad("bad!!"); // 0

// .includes("") : 문자가 있는지 확인