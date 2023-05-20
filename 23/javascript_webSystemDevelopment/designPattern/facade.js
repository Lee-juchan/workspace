// facade : 복잡한 내부구조를 감추고, 외관을 아름답게
// ++ proxy : 대리자, 실제 당사자를 숨김 (어택 프록시, 실행하면 실제로는 로봇이 공격함)

// prototype으로 구현
const Cammera1 = function() {
    function Camera() {};

    Camera.prototype.on = function() {
        console.log("Turn on the camera.");
    }

    Camera.prototype.off = function() {
        console.log("Turn off the camera.");
    }

    Camera.prototype.track_object = function() {
        console.log("Track a object.");
    }

    return Camera;
}();

const Missile1 = function() {
    function Missile() {};

    Missile.prototype.mount_missile = function() {
        console.log("Mount a missile.");
    }

    Missile.prototype.aim_target = function() {
        console.log("aim at a target.");
    }

    Missile.prototype.fire_missile = function() {
        console.log("fire a missile.");
    }

    return Missile;
}();

const Robot1 = function() {
    function Robot() {};

    Robot.prototype.camera = new Cammera1();
    Robot.prototype.missile = new Missile1();

    Robot.prototype.attack_missile = function() {
        this.camera.on();
        this.camera.track_object();
        this.missile.mount_missile();
        this.missile.aim_target();
        this.missile.fire_missile();
        this.camera.on();
    }

    return Robot;
}();

const bot1 = new Robot1();
bot1.attack_missile();



// class 문법

class Cammera2 {

    on() {
        console.log("Turn on the camera.");
    }

    off() {
        console.log("Turn off the camera.");
    }

    track_object() {
        console.log("Track a object.");
    }
};

class Missile2 {

    mount_missile() {
        console.log("Mount a missile.");
    }

    aim_target() {
        console.log("aim at a target.");
    }

    fire_missile() {
        console.log("fire a missile.");
    } 
};

class Robot2 {
    constructor() {
        this.Camera = new Cammera2();
        this.missile = new Missile2();
    }

    attack_missile() {
        this.camera.on();
        this.camera.track_object();
        this.missile.mount_missile();
        this.missile.aim_target();
        this.missile.fire_missile();
        this.camera.on();
    }

    attck_bomb() {

    }
};

const bot2 = new Robot2();
bot2.attack_missile();

module.export = {
    Robot1,
    Robot2
}