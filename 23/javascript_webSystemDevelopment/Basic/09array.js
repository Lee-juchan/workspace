/*
    Basic / 23.04.13 leejuchan

    @brief : 배열
    @details : 
*/

// 배열

// 선언
let arr1 = ["a", "b", "c"];
let arr2 = [    // 숫자, 문자, 객체, 함수 모두 담기 가능
    3,
    true,
    "A",
    {
        name: "N",
        age: 10,
    },
    function () {
        console.log("arr");
    }
];

// 인덱스 접근
arr2[0] = 5;
console.log(arr2[0]);

console.log(arr2.length); // length : 배열 길이
console.log("-----------------");


// 배열 메소드
let arr3 = ["C", "D", "E"];

// push() : 배열 끝에 추가
arr3.push("F");
console.log(`push() : ${arr3}`);

// pop() : 배열 끝을 제거
arr3.pop();
console.log(`pop() : ${arr3}`);

// unshift() : 배열 앞에 추가
arr3.unshift("A", "B");
console.log(`unshift() : ${arr3}`);

// shift() : 배열 앞을 제거
arr3.shift();
console.log(`shift() : ${arr3}`);
console.log("-----------------");


// 반복문

// length
for (let i = 0; i < arr3.length; i++) {
    console.log(arr3[i]);
}
console.log("-----------------");

// for ... of : 배열의 값을 모두 출력 (String으로)
for (let i of arr3) {
    console.log(i);
}
console.log("-----------------");