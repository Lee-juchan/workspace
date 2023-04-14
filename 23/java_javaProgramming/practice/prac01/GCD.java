/*
    #practice 01-05 / 23.04.01 leejuchan

    @brief : 최대공약수 구하기 (유클리드 호제법)
    @details : recursive, loop
*/

package practice.prac01;

import java.util.Scanner;

public class GCD {

    // @prof
    // 유클리드 호제법 -> 재귀함수
    public static int euclideanRecursive(int divided, int dividing) {

        int remainder = divided % dividing;
        
        if (remainder == 0) {
            return dividing;
        } else {
            return euclideanRecursive(dividing, remainder);
        }
    }

    // 유클리드 호제법 -> 루프
    public static int euclideanLoop(int divided, int dividing) {

        int remainder;
        do {
            remainder = divided % dividing;
            divided = dividing;             // 나눈수를 나머지로 나눔
            dividing = remainder;
        } while (remainder > 0);

        return divided;
    }


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int num1, num2;
        int divided, dividing;

        // 서로다른 숫자 2개 입력
        do {
            System.out.print("Input 2 numbers : ");
            num1 = sc.nextInt();
            num2 = sc.nextInt();
        } while (num1 == num2) ;
        
        // 큰 수 divided, 작은 수 dividing 결정
        if (num1 > num2) {
            divided = num1;
            dividing = num2;
        } else {
            divided = num2;
            dividing = num1;
        }

        // 결과 출력
        System.out.println("GCD_recursive : " + euclideanRecursive(divided, dividing));
        System.out.println("GCD_loop : " + euclideanLoop(divided, dividing));

        sc.close();
    }
}
