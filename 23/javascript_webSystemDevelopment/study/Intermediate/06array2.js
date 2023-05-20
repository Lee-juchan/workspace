/*
    #Intermediate / 23.04.15 leejuchan

    @brief : Array 관련 함수
    @details : 1. 배열 처리         ( isArray(), reverse(), sort() )
               2. 배열 분할&합병    ( splice(), slice(), concat() / join(), split() )
               3. 배열 검색         ( indexOf(), lastIndexOf(), includes() )
               4. 배열 순회         ( forEach(), map(), find(), findIndex(), filter(), reduce() )
*/

// 1. 배열 처리

// 1-1. Array.isArray() : 배열인지 확인
let user = {name : "A", age : 30};
let userList1 = ["A", "B", "C"];

// typeof (x)
console.log(typeof user); // object
console.log(typeof userList1); // object (배열 = object)

// isArray() (o)
console.log(Array.isArray(user)); // false
console.log(Array.isArray(userList1)); //true


// 1-2. .reverse() : 역순으로 배열 재정렬 (* 원본 변경됨)
let arr1 = [1, 2, 3, 4, 5, 6];

let reverse = arr1.reverse();
console.log(reverse);


// 1-3. .sort(func) : 배열 정렬 후 리턴 (* 원본 변경됨)    / func : 정렬 로직
let arr2 = [1, "c", "b", 3, 2, "a"];

arr2.sort();
console.log(arr2);

// 앞자리 기준 정렬 (문자열 취급)
let arr3 = [27, 8, 5, 13];

arr3.sort(); // [13, 27, 5, 8]
console.log(arr3);

// 오름차순 정렬
let compare = function(e1, e2) { // 정렬 함수
    let remain = e1 - e2;

    if (remain > 0) return 1;       // 왼>오 : 1
    else if (remain < 0) return -1; // 왼=오 : 0
    else return 0;                  // 왼<오 : -1
}

arr3.sort(compare); // [6, 9, 13, 27]
console.log(arr3);
console.log("-----------------");



// 2. 배열 분할 & 합병

// 2-1. .splice(n,m, x...) : n부터 m개의 요소삭제 & 추가 (* 원본 변경됨)  / .splice(n, 0, x...) : 추가만
let arr4 = [1, 2, 3];

let splice = arr4.splice(1, 1, 8, 9);
console.log(arr4); // [1, 8, 9, 3]
console.log(splice); // [2]        / 삭제된 요소 반환


// 2-2. .slice(n,m) : n~m까지 반환 (n~)
let arr5 = [1, 2, 3];

let slice = arr5.slice(1,3);
console.log(slice); // [2, 3]          / 해당 요소 반환


// 2-3. .concat(a1, a2..) : 배열 합쳐서 새배열 반환
let concat = arr5.concat([4], [5, 6]); // [1, 2, 3, 4, 5, 6]
console.log(concat);
console.log("-----------------");



// 2-4. 배열-문자열 분할 & 합병

// 2-4-1. .join("s") : 배열을 합쳐서 문자열로     / s : 구분 기호 (default ',')
let arr6 = ["Hi", "I'm", "LJC"];
let result1 = arr6.join("-");
console.log(result1);

// 2-4-2. .split("s") : 문자열을 나눠서 배열로    / s : 구분 단위 (defalut 개별문자)
let arr7 = "A,B,C,D";
let result2 = arr7.split(",");
console.log(result2);
console.log("-----------------");



// 3. 배열 요소(값, 인덱스) 검색

// 3-1. .indexOf(n, m) : m부터 탐색, 해당 요소(n)의 인덱스 반환
let arr8 = ["a", "b", "c", "d", "e", "a", "b", "c"];

let idx1 = arr8.indexOf("c"); // 2
let idx2 = arr8.indexOf("c", 4); // 7
console.log(idx1, idx2);


// 3-2. .lastIndexOf() : indexOf() + 끝부터 탐색
let idx3 = arr8.lastIndexOf("c"); // 7
console.log(idx3);


// 3-3. .includes() : 요소 포함여부 확인 (boolean 리턴)
let isC = arr8.includes("c"); // true
console.log(isC);
console.log("-----------------");



// 4. 배열 순회 method      / 인자로 함수를 받음, func(value, index, array) 함수의 인자로 값이 들어옴

// 4-1. .forEach(func) : 배열 순회

// ex
let arr9 = ["A", "B", "C"];

arr9.forEach((value, index) => console.log(`${index} : ${value}`));


// 4-2. .map(func) : return된 값으로 새로운 배열 만듬

// ex
let userList2 = [
    {name: "A", age: 10},
    {name: "B", age: 20},
    {name: "C", age: 30},
];

let newUserList2 = userList2.map((user, index) => {
    return Object.assign({}, user, { // 복사된 객체 반환
        id : index + 1,
        isAdult : user.age > 19     // isAdult 프로퍼티 추가
    });
});
console.log(newUserList2);


// 4-3. .find(func) : return된 첫번째 요소의 값 반환             (없으면 -1)
// 4-4. .findIndex(func) : return된 첫번째 요소의 인덱스 반환    (없으면 undefined)

// ex 짝수 반환
let arr10 = [1, 2, 3, 4, 5, 6];

let result3 = arr10.find(item => item % 2 === 0);    // 2만 반환
console.log(result3);

// ex 객체가 든 배열
let userList3 = [
    {name : "A", age : 30},
    {name : "B", age : 20},
    {name : "C", age : 10}
];

// find
let result4 = userList3.find(user => {
    if(user.age < 19) {
        return true;
    }
    return false;
});

// findIndex
let result5 = userList3.findIndex(user => {
    if(user.age < 19) {
        return true;
    }
    return false;
});

console.log(result4, result5);


// 4-5. .filter(func) : return된 모든 요소 배열로 반환

// ex 짝수 반환
// let arr10 = [1, 2, 3, 4, 5, 6];
let result6 = arr10.filter(item => item % 2 === 0);
console.log(result6);  // [2, 4, 6]


// 4-6. .reduce(func, s) : 결과를 누적하여 처리 
// 4-7. .reduceRight(func) : reduce  + 끝부터 처리

// ex 배열의 모든 수 합치기
// let arr10 = [1, 2, 3, 4, 5, 6];

let result7 = 0;
arr10.forEach(num => result7 += num);       // reduce x     ( for, for of, forEach )

let result8 = arr10.reduce((prev, cur) => prev += cur, 0)   // reduce
console.log(result7, result8);


// ex 객체가 든 배열
let userList4 = [
    {name : "A", age : 30},
    {name : "B", age : 10},
    {name : "C", age : 27},
    {name : "D", age : 26},
    {name : "E", age : 15},
    {name : "F", age : 19}
]

// 성인 이름만 추출
let result9 = userList4.reduce((prev, cur) => {
    if(cur.age > 19) {
        prev.push(cur.name);
    }
    return prev;
}, []); // 초기값 빈 배열
console.log(result9);


// 성인 나이 합산
let result10 = userList4.reduce((prev, cur) => {
    if(cur.age > 19) {
        prev += cur.age;
    }
    return prev;
}, 0)
console.log(result10);