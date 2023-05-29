/*
    Basic / 23.04.13 leejuchan

    @breif : 조건문
    @details : 1. if
               2. switch
*/

// 1. if문  (if, else if, else)
console.log("----------------");
console.log("- 나이 판별");

let age = 17;

if (age > 19) {
    console.log("OK");
} else if (age === 19) {
    console.log("GOOOOD");
} else {
    console.log("Nope");
}


// 2. switch
console.log("----------------");
console.log("- 과일 가격")

let fruit = "melon";

switch (fruit) {
    case "apple" :
        console.log("100$");
        break;
    case "banana" :
        console.log("200$");
        break;
    case "kiwi" :
        console.log("300$");
        break;
    case "melon" :
    case "water melon" :
        console.log("500$");
        break;
    default :
        console.log("Not exist!");
}