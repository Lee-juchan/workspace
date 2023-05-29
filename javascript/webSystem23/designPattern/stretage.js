/*
Strategy pattern
때에 맞는 전략(알고리즘)을 시행하라
*/

// 원하는 무기를 달아서 공격함 (무기를 전략적으로 선택)
const Weapon6 = (function () {
    function Weapon() {
        this.weapon = null;
    };

    Weapon.prototype.setWeapon = function(weapon) {
        this.weapon = weapon;
    }

    Weapon.prototype.fire = function () {
        this.weapon.fire();
    };

    return Weapon;
})();


const missile6 = (function () {
    function Missile() {};

    Missile.prototype.fire = function() {
        console.log("Fire a missile");
    }
    return Missile;
})();

const bomb6 = (function () {
    function Bomb() {}

    Bomb.prototype.fire = function() {
        console.log("Fire a bomb");
    };
    
    return Bomb;
})();

const weapon6 = new Weapon6();
weapon6.setWeapon(new missile6());
weapon6.fire();

weapon6.setWeapon(new bomb6());
weapon6.fire();


// class로 바꾸기
class Weapon7 {
    setWeapon(weapon) {
        this.weapon = weapon;
    }

    fire() {
        this.weapon.fire();
    };
}


class missile7 {
    fire() {
        console.log("Fire a missile");
    }
}

class bomb7 {
    fire = function () {
        console.log("Fire a bomb");
    };
}

Weapon