var Grade = function () {
    var args = Array.prototype.slice.call(arguments);
    for(var i = 0; i < args.length; i++) {
        this[i] = args[i];
    }
    this.length = args.length;
}

// Grade.prototype = []; // prototype을 배열로 바꿈
Grade.prototype = ['a', 'b', 'c', 'd'];
var g = new Grade(100, 80);

console.log(Grade.prototype.entries);

g.push(90);
console.log(g);

delete g.length; // length가 없어져서 객체로 바뀜 (요소: 2)
console.log(g);

g.push(70); // 하지만, prototype에 length가 남아있음 (길이: 1, 요소: 3)
console.log(g);