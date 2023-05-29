/*
    #practice 01-08 / 23.04.01 leejuchan

    @brief : 소수 구하는 알고리즘
    @details : 해당수보다 작은 수로 모두 나누고, 나눠 떨어지는지 확인
*/

package assignment.practice.prac01;

import java.util.Scanner;

public class PrimeList {

    // @prof
    // 소수 판별함수 _ 해당숫자가 소수인지 판별
    public static boolean isPrime(int num) {
        
        for (int div=2; div < num; div++) {
            
            if (num % div == 0) {
                return false;
            }
        }
        return true;
    }

    // @prof
    // 소수 출력함수 _ 해당범위의 숫자 중 소수만 출력
    public static void printPrime(int range) {

        for (int num=2; num <= range; num++) {
            
            if (isPrime(num)) {
                System.out.print(num + " ");
            }
        }
        System.out.println();
    }

    // 소수 판별하고 출력하는 단일함수
    public static void printPrime_my(int range) {

        for(int num = 2; num <= range; num++) {

            int divNum;
            for(divNum = 2; divNum <= num; divNum++) {

                if(num % divNum == 0) {
                    break;
                }
            }
            if(num==divNum) {
                System.out.print(num + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        // 범위 입력
        System.out.print("Input range of numbers : ");
        int range = sc.nextInt();

        // 소수 출력
        System.out.print("printPrime_my: ");
        printPrime_my(range);
        System.out.print("printPrime: ");
        printPrime(range);

        sc.close();
    }
}
