// // 프로미스 : 바쁜 대기x, 작업이 완료되거나 실패했을때 알려줌
// // const pr = new Promise((resolve, reject) => {}); // resolve 성공시, reject 실패시 실행되는 함수 (callback)

// // promise 원리
// // 프로미스 객체 => pr {state: pending, result: undefined} // pending=대기
// // resolve(value) 호출(성공) => pr {state: fullfiled, result: value} //fullfilled=이행됨
// // resolve(error) 호출(실패) => pr {state: rejected, result: error} //rejected=거부됨

// ///-------------------------

// // (판매자 코드)
// const seller = new Promise((resolve, reject) => {
//     setTimeout(() => {
//         resolve('Ok');
//         // reject(new Error("error.."));
//     }, 300);
// });

// console.log(seller);
// setTimeout(console.log, 500, seller); // 상태 확인용 (fullfilled)


// // (구매자 코드) then(func1, func2) :func1=이행되었을떄 실행, func2=거부되었을떄 실행하는 함수
// seller.then(
//     function (result) { // fullfill시 실행 (result = 인자로 전달된 값)
//         console.log(result + " 가지러 가자");
//     },
//     function (err) { // reject시 실행
//         console.log("다시 주문해주세요..");
//     }
// );


// // catch : 실패시 then 대신 사용가능
// seller.then(
//     function (result) { }
// ).catch(
//     function (err) { }
// );

// // seller.then(             동일한 기능
// //     function(result){},
// //     function(err){}
// // )


// // finally : 이행,실패여부와 관계없이 실행
// seller.then(
//     function (result) { }
// ).catch(
//     function (err) { }
// ).finally(
//     function () {
//         console.log("주문 끝");
//     }
// );



// // ex 1
// const pr = new Promise((resolve, reject) => {
//     setTimeout(() => {
//         resolve('OK');
//         // reject(new Error("err"));
//     }, 1000);
// });

// console.log("start");
// pr.then(result => {
//     console.log(result);
// })
//     .catch(err => {
//         console.log(err);
//     })
//     .finally(() => {
//         console.log("end");
//     });



// //ex2 3개의 상품 주문

// // 프로미스 없이
// const f1 = (callback) => {
//     setTimeout(function() {
//         console.log("1번 주문 완료");
//         callback();
//     }, 300);
// };

// const f2 = (callback) => {
//     setTimeout(function () {
//         console.log("2번 주문 완료");
//         callback();
//     }, 300);
// };

// const f3 = (callback) => {
//     setTimeout(function () {
//        console.log("3번 주문 완료");
//         callback();
//     }, 300);
// };

// console.log("start"); // 콜백 지옥
// f1(function() {
//     f2(function() {
//         f3(function() {
//             console.log("end");
//         });
//     });
// });

// // f1(f2(f3(()=> console.log("end")))); // 이건 왜 안될까????


// 프로미스 사용
const pf1 = () => {
    return new Promise((res, rej) => {
        setTimeout(() => {
            res("1번 주문 완료");
        }, 200);
    });
};

const pf2 = (message) => {
    console.log(message);
    return new Promise((res, rej) => {
        setTimeout(() => {
            res("2번 주문 완료");
            // rej(new Error("error.."));
        }, 300);
    });
};

const pf3 = (message) => {
    console.log(message);
    return new Promise((res, rej) => {
        setTimeout(() => {
            res("3번 주문 완료");
            // rej(new Error("error.."));
        }, 100);
    });
};

// console.time("promise");

// pf1().then(res => pf2(res))
//     .then(res => pf3(res))
//     .then((res) => console.log(res))
//     .catch(console.log) //?? 에러처리 누구의?
//     .finally(() => {
//         console.log("end");

//         console.timeEnd("promise");
//     });


// promise all : 프로미스를 한꺼번에 시작하고, 모두 이행되면 다음으로 넘어감 (병렬 처리!)
//                  하나라도 실패하면, 실패
// console.time("promise.all");

// Promise.all([pf1(), pf2(), pf3()])
//     .then(res => { 
//         console.log(res);
//         console.timeEnd("promise.all");
//     });


// promise race : 동시에 프로미스 실행, 하나라도 성공하면 그 결과 반환
console.time("promise.race");

Promise.race([pf1(), pf2(), pf3()])
    .then(res => {
        console.log(res);
        console.timeEnd("promise.race");
    });