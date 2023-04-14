/*
    #lecture 02-02 / 23.04.01 leejuchan

    @brief : 화씨-섭씨 변환 값 계산
*/

package ch02;

public class FtoC {
    public static void main(String[] args) {

        double F = 105.0;
        double C = 5.0 / 9 * (F - 32);

        System.out.printf("F : %.2f degree\n", F);
        System.out.printf("C : %.2f degree\n", C);
    }
}
