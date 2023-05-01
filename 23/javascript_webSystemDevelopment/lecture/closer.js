const arr = [10, 20, 30, 40, 50];

for (var i = 0; i < 200000; ++i) {
    setTimeout(function() {
        console.log("index? : " + i);
    }, 1);
}