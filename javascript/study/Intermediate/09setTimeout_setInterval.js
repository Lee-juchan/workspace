// setTimeout : 일정 시간이 지난 후 함수를 실행
// setInterval : 일정 시간 간격으로 함수를 반복

// 함수 실행을 시간으로 제어하는 스케줄링??!


// setTimeout
fn = function () {
    console.log(10);
}

setTimeout(fn, 300); // 0.3초후 3 출력

setTimeout(function () { // 동일한 기능
    console.log(10);
}, 300);

showName = function (name) {
    console.log(name);
};

setTimeout(showName, 300, "Mike"); // 함수, 시간, 인수1,2,3.. 순으로 전달


//clearTimeout 예정된 작업을 없앰
const timeId = setTimeout(showName, 3000, "LJC");
clearTimeout(timeId); // 도중에 실행 취소 (3초전에 코드 취소)


// setInterval
const tId = setInterval(showName, 300, "Mike");

// clearInterval
setTimeout(clearInterval, 3000, tId); // 3초후 중단


// **delay = 0?? 바로 실행되지는 않음
setTimeout(function () {
    console.log(2);
}, 0);
console.log(1); // 이경우 1이 먼저 출력 / 현재 실행중인 스크립트가 종료된 후에, 스케줄링 함수를 시작하기 때문 (+기본 딜레이)


//ex

let num = 0;
showTime = function () {
    console.log(`hello, 접속하신지 ${num++}초가 지났음`);
    if(num > 5) {
        clearInterval(tId1);
    }
}
const tId1 = setInterval(showTime, 1000);
