var coffeeList = '';

var addEspresso = function(name) {
    coffeeList += name;
    console.log(coffeeList);
    setTimeout(addAmericano, 500, 'Americano');
}

var addAmericano = function(name) {
    coffeeList += ', ' + name;
    console.log(coffeeList);
    setTimeout(addMocha, 500, 'Cafe Mocha');
}

var addMocha = function(name) {
    coffeeList += ', ' + name;
    console.log(coffeeList);
    setTimeout(addLatte, 500, 'Cafe Latte');
}

var addLatte = function(name) {
    coffeeList += ', ' + name;
    console.log(coffeeList);
}

setTimeout(addEspresso, 500, 'Espresso');