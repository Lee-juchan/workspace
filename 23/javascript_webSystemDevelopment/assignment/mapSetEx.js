// map : 다양한 타입의 키 값      (<-> object : String type 키 값만 존재)
// set : 키 값 x, 중복 허용 x

// Map.forEach : 콜백함수 인자로 callback(curValue, curKey, Map) 전달
// Set.forEach : 콜백함수 인자로 callback(curValue, curValue, Set) 전달 (set은 키가 없음)

let obj = {a:1, b:2};

// map
let myMap = new Map([
    ["a", 3],
    ["3", 7],
    [3, 7]
]);


// map.forEach
Map.prototype.forEach = function(callback, thisArg) {
    for(let element of this) {
        callback.call(thisArg || global, element[1], element[0], this);
    }
}
myMap.forEach((value, index) => console.log(value + index));


// set
let mySet = new Set([1,2,3]);

// set.forEach
Set.prototype.forEach = function(callback, thisArg) {
    for(let value of this) {
        callback.call(thisArg || global, value, value, this);
    }
}
mySet.forEach((value) => console.log(value * 2));