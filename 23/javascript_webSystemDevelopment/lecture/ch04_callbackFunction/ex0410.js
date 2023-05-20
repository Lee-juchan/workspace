var obj1 = {
    name: 'obj1',
    func: function () {
        var self = this;
        return function () {
            console.log(self.name);
        };
    }
};
var callback1 = obj1.func();
setTimeout(callback1, 100);


var obj2 = {
    name: 'obj2',
    func: obj1.func // 실행을 안한 시점이라, this 바인딩 아직! 함수 내용(코드)만 존재
};
var callback2 = obj2.func();
setTimeout(callback2, 100);


var obj3 = { name: 'obj3' };
var callback3 = obj1.func.call(obj3);
setTimeout(callback3, 100);