/*
    #lecture 03-03 / 23.04.01 leejuchan

    @brief : 1~6 주사위 만들기
    @details : Math.random() 사용
*/

package ch03;

public class SimpleDice {
    public static void main(String[] args) {

        int dice;

        // 주사위 연속 10번 굴리기
        for(int i=0; i<10; i++) {
            dice = (int) (Math.random() * 6) + 1;
            System.out.print(dice + " ");
        }
        
    }
}
