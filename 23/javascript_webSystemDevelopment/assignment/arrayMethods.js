/*
    #assignment / 23.05.02 leejuchan

    @brief : 배열 순회 메소드 구현
    @details : forEach, map, flatMap, filter, some, every, find, findIndex, from / Map.forEach, Set.forEach
*/

// < 순회 함수 >
// 콜백함수를 인자로 받는다, Array, Map, Set을 순회하며 콜백함수에게 값을 전달한다.
// 콜백 함수의 인자로 전달되는 값 -> callback(curValue, curIndex, Array) : 현재값, 현재 인덱스, 객체(Array, Map, Set 자체)

let obj = { a: "test" };

// 1. Array

// forEach : 콜백함수를 실행만      (return : undefined)
Array.prototype.forEach = function (callback, thisArg) {
    for (let i = 0; i < this.length; i++) {
        callback.call(thisArg || global, this[i], i, this);
    }
};
// ex
console.log("forEach ----------");
let forEachEx = [1, 2, 3].forEach((value, index) => console.log(value * index));



// map : 콜백함수의 리턴값으로 새 배열 생성     (return : 생성된 배열)
Array.prototype.map = function (callback, thisArg) {
    let mappedArr = [];
    for (let i = 0; i < this.length; i++) {
        let mappedValue = callback.call(thisArg || global, this[i], i, this);
        mappedArr[i] = mappedValue;
    }
    return mappedArr;
};
// ex
console.log("map ----------");
let mapEx = [1, 2, 3].map((value, index) => value * index);
console.log(mapEx);



// flatMap : map과 동일 + 한층 벗겨진 새 배열 생성      (return : 생성된 배열)
Array.prototype.FlatMap = function (callback, thisArg) {
    let mappedArr = [];
    let idx = 0;

    for (let i = 0; i < this.length; i++) {
        let mappedValue = callback.call(thisArg || global, this[i], i, this);

        if (typeof mappedValue === 'object') { // 콜백함수의 리턴값이 배열(object)일 때, 배열을 한층 벗김
            for (let j = 0; j < mappedValue.length; j++) {
                mappedArr[idx++] = mappedValue[j];
            }
        } else {
            mappedArr[idx++] = mappedValue;
        }
    }
    return mappedArr;
};
// ex
console.log("flatMap ----------");
let flatMapEx = [1, 2, 3].FlatMap((value, idx) => [value, idx]);
// let compare = [1, 2, 3].map((value, idx) => [value, idx]);
// console.log(flatMapEx, compare);
console.log(flatMapEx);



// filter : 콜백함수의 리턴값이 true인 요소들로 새 배열 생성      (return : 생성된 배열)
Array.prototype.filter = function (callback, thisArg) {
    let filteredArr = [];
    let idx = 0;

    for (let i = 0; i < this.length; i++) {
        let condition = callback.call(thisArg, this[i], i, this);
        if (condition) {
            filteredArr[idx++] = this[i];
        }
    }
    return filteredArr;
};
// ex
console.log("filter ----------");
let filterEx = [1, 2, 3].filter(value => value % 2 == 0);
console.log(filterEx);



// some : 콜백함수의 리턴값이 적어도 하나 true인 경우 true 리턴       (return : true | false)
Array.prototype.some = function (callback, thisArg) {
    for (let i = 0; i < this.length; i++) {
        let condition = callback.call(thisArg, this[i], i, this);
        if (condition) {
            return true;
        }
    }
    return false;
};
// ex
console.log("some ----------");
let someEx = [1, 2, 3].some(value => value >= 2);
console.log(someEx);



// every : 콜백함수의 리턴값이 모두 true인 경우 true 리턴       (return : true | false)
Array.prototype.every = function (callback, thisArg) {
    for (let i = 0; i < this.length; i++) {
        let condition = callback.call(thisArg, this[i], i, this);
        if (!condition) {
            return false;
        }
    }
    return true;
};
// ex
console.log("every ----------");
let everyEx = [1, 2, 3].every(value => value >= 2);
console.log(everyEx);



// find : 콜백함수의 리턴값이 true인 첫번째 요소 반환       (return : 배열 요소 | undefined)
Array.prototype.find = function (callback, thisArg) {
    for (let i = 0; i < this.length; i++) {
        let condition = callback.call(thisArg, this[i], i, this);
        if (condition) {
            return this[i];
        }
    }
    return undefined;
};
// ex
console.log("find ----------");
let findEx = [1, 2, 3].find(value => value >= 2);
console.log(findEx);



// findIndex : 콜백함수의 리턴값이 true인 첫번째 요소의 인덱스 반환       (return : 배열 인덱스 | -1)
Array.prototype.FindIndex = function (callback, thisArg) {
    for (let i = 0; i < this.length; i++) {
        let condition = callback.call(thisArg, this[i], i, this);
        if (condition) {
            return i;
        }
    }
    return -1;
};
// ex
console.log("findIndex ----------");
let findIndexEx = [1, 2, 3].findIndex(value => value >= 2);
console.log(findIndexEx);



// from : 유사배열, 순회가능 객체로 배열 생성       (return : 생성된 배열)
Array.prototype.from = function (arrLike) {
    let arr = [];
    let idx = 0;
    for (let i = 0; i < arrLike.length; i++) {
        arr[idx++] = arrLike[i];
    }
    return arr;
};
//ex
console.log("from ----------");
let o = {
    0: "a",
    1: "b",
    2: "c",
    length: 3
};
let s = "string";

let fromEx1 = Array.prototype.from(o);
let fromEx2 = Array.prototype.from(s);
console.log(fromEx1, fromEx2);



// 2. Map, Set

// map : 다양한 타입의 키 값      (<-> object : String type 키 값만 존재)
// set : 키 값 x, 중복 허용 x


// map.forEach : 콜백함수 인자로 callback(curValue, curKey, Map) 전달
Map.prototype.forEach = function(callback, thisArg) {
    for(let element of this) {
        callback.call(thisArg || global, element[1], element[0], this);
    }
}

let myMap = new Map([
    ["a", 3],
    ["3", 7],
    [3, 7]
]);
myMap.forEach((value, index) => console.log(value + index));



// set.forEach : 콜백함수 인자로 callback(curValue, curValue, Set) 전달 (set은 키가 없음)
Set.prototype.forEach = function(callback, thisArg) {
    for(let value of this) {
        callback.call(thisArg || global, value, value, this);
    }
}

let mySet = new Set([1,2,3]);
mySet.forEach((value) => console.log(value * 2));