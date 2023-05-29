/*
Proxy parrtern 
대리자 패턴 : 내 일을 대신해줘
*/

// // 불러올 때 require
// const Facade = require("./Facade");

// // proxy
// const RobotAttack = (function () {
//     function RobotAttack() {
//         this.bot2 = new Facade.bot2();
//     }

//     RobotAttack.prototype.attack_missile = function () {
//         this.bot2.attack_missile();
//     }

//     return RobotAttack();
// })();


// class로 바꾸기
class RobotAttack2 {
    constructor() {
        this.bot2 = new Facade.bot2();
    }

    attack_missile () {
        this.bot2.attack_missile();
    }
}



/*
Proxy 객체를 사용하면 한 객쳉 대한 기본작업을 가로채고 재정의ㅏ는 픍시를 만들 수 있따.
*/

// ex
const target1 = {
    message1: "hello",
    message2: "everyone"
};

const handler1 = {
    get(target, prop, receiver) { //prop 프로퍼티
        if(prop === "message2") {
            return "world";
        } else {
            return target[prop];
        }

        // return Reflect.get(...arguments);
    }
}

const proxy = new Proxy(target1, handler1);

console.log(proxy.message1);
console.log(proxy.message2);



// 객체에 원하는 속성이 없을 때, 다른 값을 출력해줄 수 있음
const handler2 = {
    get(obj, prop) { // 값을 받을 때
        return prop in obj ? obj[prop] : 37;
    }
};

const proxy2 = new Proxy({}, handler2);
proxy2.a = 1;
proxy2.b = undefined;

console.log(proxy2.a, proxy2.b);
console.log('c' in proxy2, proxy2.c);



// 유효성 검사
const vaildator = {
    set(obj, prop, value) { //obj 는 proxy에 입력하 ㄴ객체
        if (prop == 'age') {
            // console.log(obj);
            if (!Number.isInteger(value)) {
                throw new TypeError("the age is not an integer.");
            }
            if(value > 200) {
                throw new RangeError('the age seems invalid.');
            }
        }
        obj[prop] = value;
        return true;
    }
}
const person = new Proxy({}, vaildator);
// const person = new Proxy(실제 객체, vaildator);

person.age = 100;
console.log(person.age);

// person.age = 'young';
// person.age = 300;