/*
    #Intermediate / 23.04.15 leejuchan

    @brief : Symbol
    @details : 1. 심볼 ( Symbol() ) + 심볼형 키
               2. 전역 심볼 ( Symbol.for() )
               3. 심볼 값 ( Symbol.keyFor(), .description )
               4. 숨겨진 심볼 확인
*/

// 1. Symbol() : 유일한 식별자 생성

let s1 = Symbol("A");
let s2 = Symbol("A");

console.log(s1); // Symbol(A)
console.log(s2); // Symbol(A)

console.log(s1 == s2); // false
console.log(s1 === s2); // false
console.log("-----------------");


// 1-2. 객체의 Symbol형 키

let id = Symbol("id");

let p1 = {
    name : "A",
    age : 10,
    [id] : "myid" // Symabol키
};

let p1Keys = Object.keys(p1);
console.log(p1Keys); // Symbol형 key는 숨겨짐
console.log("-----------------");


// ex1-2-1
// 다른 개발자가 만든 객체
let p2 = { 
    name : "C",
    age : 30
};


// 내가 작업
// p2.showName = function() {      // 사용자가 보는 결과도 변경됨
//     console.log(this.name);
// };

let func = Symbol("showName"); // 사용자가 보는 결과는 바뀌지 않음
p2[func] = function() {
    console.log(`showName : ${this.name}`);
};

p2[func](); // 함수 작동 잘됨


// 사용자가 보는 결과
for(let key in p2) {
    console.log(`${key} : ${p2[key]}`);
}


// 2. Symbol.for() : 전역 심볼, 공유되는 하나의 심볼 생성
let s3 = Symbol.for("B");
let s4 = Symbol.for("B");

console.log(s3 === s4); // true
console.log("-----------------");


// 3. 심볼의 값 확인

// 3-1. Symbol.keyFor() : 심볼의 값(이름) 리턴 (전역 심볼만)
let s3Key = Symbol.keyFor(s3);
console.log(s3Key);

// 3-2. .description : 심볼의 값(이름) (모든 심볼)
let s1Key = s1.description;
console.log(s1Key);
console.log("-----------------");


// 4. 숨겨진 Symbol key 보는법
console.log(Object.getOwnPropertySymbols(p1)); // 심볼만 확인
console.log(Reflect.ownKeys(p1)); // 심볼 포함한 모든 키 확인
console.log("-----------------");


