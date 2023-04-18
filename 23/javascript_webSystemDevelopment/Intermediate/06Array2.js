/*
    #Intermediate / 23.04.15 leejuchan

    @brief : Array 관련 함수
    @details :
*/

// .splice(n,m, x...) : n부터 m개의 요소삭제 & 요소추가 (삭제된 요소 반환) / 추가만 하려면 .splice(n, 0, x...)
let arr1 = [1, 2, 3];

let splice = arr1.splice(1, 1, 10, 20);
console.log(arr1); // [1, 10, 20, 3]        / 배열 자체를 바꿈
console.log(splice); // [2]

// .slice(n,m) : n~m까지 반환 (인자 없으면 배열전체)
let arr2 = [1, 2, 3];

let slice = arr2.slice(1,3); // [2, 3]
console.log(slice);

// .concat(a1, a2..) : 배열 합쳐서 새 배열 반환
let concat = arr2.concat([4], [5, 6]); // [1, 2, 3, 4, 5, 6]
console.log(concat);
console.log("-----------------");



// .forEach(func) : 배열 순회
// ex
let arr3 = ["A", "B", "C"];

arr3.forEach((name, index) => {
    console.log(`${index}. ${name}`);
})
console.log("-----------------");


// .indexOf(n, ) : n부터 탐색, 해당요소의 인덱스 반환
let arr4 = [1, 2, 3, 4, 5, 1, 2, 3];

let idx1 = arr4.indexOf(3); // 2
let idx2 = arr4.indexOf(3, 3); // 7
console.log(idx1, idx2);

// .lastIndexOf() : 끝부터 거꾸로 탐색,
let idx3 = arr4.lastIndexOf(3); // 7
console.log(idx3);

// .includes() : 요소 포함여부 확인
let isNum3 = arr4.includes(3); // true
console.log(isNum3);
console.log("-----------------");


// .find(func) : 만족하는 첫번째 인덱스만 반환 (없으면 -1)
// .findIndex(func) : 만족하는 첫번째 값만 반환 (없으면 undefined)

// ex1 짝수 반환
let arr5 = [1, 2, 3, 4, 5, 6];

let result1 = arr5.find((item) => {
    return item % 2 === 0;  // 2만 반환
});

console.log(result1);
console.log("-----------------");


// ex2
let userList = [
    {name: "A", age:30},
    {name: "B", age:20},
    {name: "C", age:10}
];

let result2 = userList.find((user) => { // find
    if(user.age < 19) {
        return true;
    }
    return false;
})

let result3 = userList.findIndex((user) => { //findIndex
    if(user.age < 19) {
        return true;
    }
    return false;
})

console.log(result2, result3);
console.log("-----------------");


// .filter(func) : 만족하는 모든 요소를 배열로 반환

// ex1 짝수 반환
// let arr5 = [1, 2, 3, 4, 5, 6];
let result4 = arr5.filter((item) => {
    return item % 2 === 0;  // 2만 반환
});

console.log(result4);
console.log("-----------------");


// .reverse() : 역순으로 배열 재정렬
// let arr5 = [1, 2, 3, 4, 5, 6];
let reverse = arr5.reverse();

console.log(reverse);
console.log("-----------------");


// .map(func) : 함수를 받아 특정기능을 시행하고 새로운 배열 반환

// ex1
let userList2 = [
    {name: "A", age: 10},
    {name: "B", age: 20},
    {name: "C", age: 30},
];

let newUserList2 = userList2.map((user, index)=>{
    return Object.assign({}, user, {
        id : index + 1,
        isAdult : user.age > 19     // isAdult 프로퍼티 추가
    });
});

console.log(newUserList2);
console.log("-----------------");



// .join("s") : 배열을 합쳐 문자열 만듬 (s로 구분, 없으면 쉼표)
let arr6 = ["Hi", "I'm", "LJC"];
let result5 = arr6.join("-");
console.log(result5);

// .split("s") : 문자열을 나눠서 배열로 만듬 (s단위로 구분, 없으면 개별문자로 나눔)
let arr7 = "A,B,C,D";
let result6 = arr7.split(",");
console.log(result6);
console.log("-----------------");


// Array.isArray() : 배열인지 확인
let user = {
    name : "A",
    age : 30
};
let userList3 = ["A", "B", "C"];

console.log(typeof user); // object
console.log(typeof userList3); // object (배열도 object임)

console.log(Array.isArray(user)); // false
console.log(Array.isArray(userList3)); //true
console.log("-----------------");


// .sort(func) : 배열 정렬 (배열 자체 변경) / 정렬 로직을 담은 함수를 받음
let arr8 = [1, "c", "b", 3, 2, "a"];

let sort1 = arr8.sort();
console.log(sort1);


let arr9 = [27, 8, 5, 13];

let sort2 = arr9.sort(); // [13, 27, 5, 8] -> 숫자로 문자열로 취급 (앞자리 보고 정렬)
console.log(sort2);


arr9 = [27, 8, 5, 13]; // 두 수를 비교해서 결과(- 0 +)에 따라 작은수는 앞으로, 큰수는 뒤로

// 8 27 5 13 (8_27)
// 5 8 27 13 (5_8)
// 5 8 27 13 (13_5)
// 5 8 27 13 (13_8)
// 5 8 13 27 (13_27)

let func = function(e1, e2) { // 정렬 로직
    // console.log(e1, e2);
    return e1 - e2;         
}
let sort3 = arr9.sort(func); // [6, 9, 13, 27]
console.log(sort3);
console.log("-----------------");
/*
    어려우니까 Lodash에서 만들어 놓은거 사용하자 _.sortBy(arr)
*/


// .reduce(func) : 인수로 함수를 받음 (누적 계산값, 현재 값, 초기값(없으면 첫요소)) => {return 계산값};
// .reduceRight(func) : reduce랑 동일 (+ 배열 우측부터 연산 수행)

// ex1 배열의 모든 수 합치기
let arr10 = [1, 2, 3, 4, 5];

// for, for of, forEach
let result7 = 0;
arr10.forEach(num => {
    result7 += num;
});
console.log(result7);

// reduce
let result8 = arr10.reduce((prev, cur) => {
    return prev += cur;
}, 0)
console.log(result8);


// ex2 배열 반환
let userList4 = [
    {name: "A", age: 30},
    {name: "B", age: 10},
    {name: "C", age: 27},
    {name: "D", age: 26},
    {name: "E", age: 15},
    {name: "F", age: 19},
]

// 성인 이름만 추출
let result9 = userList4.reduce((prev, cur)=>{
    if(cur.age > 19) {
        prev.push(cur.name);
    }
    return prev;
}, []); // 초기값 빈 배열
console.log(result9);


// 성인 나이 합산
let result10 = userList4.reduce((prev, cur)=>{
    if(cur.age > 19) {
        prev += cur.age;
    }
    return prev;
}, 0)
console.log(result10);