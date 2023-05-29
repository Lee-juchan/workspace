/*
    #Intermediate / 23.04.15 leejuchan

    @brief : number 관련 함수
    @details : 1. Math 
                    1) random()
                    2) 연산 ( max, min, abs, pow, sqrt), PI
                    3) 소수점 처리 ( ceil(), floor(), round() / toFixed() )
               2. isNaN()
               3. 숫자 변환 ( toString(), parseInt(), parseFloat() )
*/

// 1. Math

// 1-1. Math.random() : 난수(0~1) 반환
let dice = Math.floor(Math.random() * 6) + 1
console.log(`dice : ${dice}`);
console.log("---------------");


// 1-2. 연산
// 1-2-1. Math.max(), Math.min() : 최댓값, 최솟값
let max = Math.max(1,3,5,7); // 7
let min = Math.min(1,3,5,7); // 1

// 1-2-2. Math.abs() : 절댓값
let abs = Math.abs(-5); // 5

// 1-2-3. Math.pow(n,m) : 거듭제곱 ( n^m )
let pow = Math.pow(2,3) // 8

// 1-2-4. Math.sqrt() : 제곱근
let sqrt = Math.sqrt(16); // 4
console.log(max, min, abs, pow, sqrt);
console.log("---------------");

// 1-2-5. Math.PI
console.log(Math.PI); // 3.141592653589793


// 1-3. 소수점 처리
// 1-3-1. Math.ceil() : 올림
let piCeil = Math.ceil(Math.PI); // 4

// 1-3-2. Math.floor() : 내림
let piFloor = Math.floor(Math.PI); // 3

// 1-3-3. Math.round() : 반올림
let piRound = Math.round(Math.PI); // 3
console.log(piCeil, piFloor, piRound);

// 1-3-4. .toFixed(n) : 반올림해서 소수점 n번째까지 표현 (string 반환 -> Number() 변환해야 함)
let pi0 = Math.PI.toFixed(0);
let pi4 = Math.PI.toFixed(4);
console.log(pi0, pi4);
console.log("---------------");


// 2. isNaN(n) : n이 NaN인지 판단 (유일)
let nan = Number("x"); // NaN

let com1 = nan == NaN; // false
let com2 = NaN == NaN; // false
let com3 = isNaN(nan); // true

console.log(com1, com2, com3);
console.log("---------------");


// 3. 숫자 변환
// 3-1. toString(n) : 숫자를 n진수로 변경 (string 반환)
let n1 = 200;

let n1Bin = n1.toString(2);
let n1Hex = n1.toString(16);
console.log(`Bin : ${n1Bin}, Hex : ${n1Hex}`);
console.log("---------------");

// 3-2. parseInt(" ", n) : 문자열 -> 정수형 반환 (n진수 -> 10진수) (문자랑 섞여도 가능)
let n2 = parseInt("ab23"); // NaN
let n3 = parseInt("23ab"); // 23
console.log(n2, n3);

let n4 = "1101";
let n4BinToDex = parseInt(n4, 2); // 1101(2) -> 13
let n4HexToDex = parseInt(n4, 16); // 1101(16) -> 4353
console.log(n4BinToDex, n4HexToDex);
console.log("---------------");

// 3-3. parseFloat(" ") : 문자열 -> 부동소수형 반환 (문자랑 섞여도 가능)
let n5 = parseFloat("12.45ab"); // 12.45
console.log(n5);
console.log("---------------");