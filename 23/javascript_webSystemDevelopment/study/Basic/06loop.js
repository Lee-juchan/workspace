/*
    Basic / 23.04.12 leejuchan

    @brief : 반복문
    @details : 1. for
               2. while
               3. break, continue
*/

// 1. for
console.log("- 1~10 출력");

for (let i = 1; i <= 10; i++) {
    console.log(i);
}

console.log("------------------");


// 2. while    / do while : 적어도 한번 실행
console.log("- 1~10 출력");

let i = 1;
while(i <= 10) {
    console.log(i);
    i++;
}

console.log("------------------");


// 3-1. break
console.log("- num이 10이면 break");

let num = 1;
while (true) {
    if(num === 10) {
        break;
    }
    num++;
}
console.log(num);

console.log("------------------");


// 3-2. continue
console.log("- 짝수만 출력");

for (let i=0; i<10; i++) {
    if (i % 2 != 0) {
        continue;
    }
    console.log(i);
}

console.log("------------------");