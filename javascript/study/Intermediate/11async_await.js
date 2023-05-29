// async, await
// 프로미스를 체인형태로 하는것보ㅗ다 가독성이 좋음


// async : 프로미스를 반환함            funciton 앞에 붙임
let getName = async function() {
    return "Mike";
};

console.log(getName());