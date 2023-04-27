/*
    #lecture 07-02 / 23.04.28 leejuchan

    @brief : 주사위 클래스 구현
    @details : 주사위 2개 굴려서 나온 수 합산 (Demo)
*/

package ch07.Dice;

import java.util.Random;

public class Dice {
    // private : 속성값을 공개하는 것 지양
    private int faceValue = 0;
    private int MAX_VALUE = 6;
    private int MIN_VALUE = 1;
    private Random rand = new Random(); // 난수생성 객체

    // 주사위 굴리고 결과 리턴
    public int roll() {
        faceValue = rand.nextInt(MAX_VALUE) + MIN_VALUE;
        return faceValue;
    }

    // 내부정보 확인용
    public int getFaceValue() {
        return faceValue;
    }
}
