/*
    #lecture 03-08
    #practice 01-03 / 23.04.01 leejuchan

    @brief : 1~100중 짝수의 합 출력
*/

package ch03;

public class evenSum {
    public static void main(String[] args) {

        int evenSum = 0;
        for(int num=2; num<=100; num+=2) {
            evenSum += num;
        }

        System.out.println("evenSum : " + evenSum);
    }
}
