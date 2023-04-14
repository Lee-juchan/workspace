/*
    #lecture 05-01 / 23.04.01 leejuchan

    @brief : 배열 모든 요소의 평균, 최대값, 최소값 출력 
    @details : 배열길이 입력 받고, 길이에 따라 배열 생성
*/

package ch05;

import java.util.Scanner;

public class KeyInput {

    // 배열 생성, 값 입력 함수
    public static int[] creatArr() {

        Scanner sc = new Scanner(System.in);
        int length;

        // 배열길이 입력
        System.out.print("Input Length of array : ");
        length = sc.nextInt();

        int[] arr = new int[length];

        // 배열 값 입력
        System.out.printf("Input %d elements : ", length);
        for(int idx=0; idx<length; idx++) {
            arr[idx] = sc.nextInt();
        }

        sc.close();

        return arr;
    }

    // 배열 평균계산 함수
    public static double calcArrAvg(int[] arr) {

        int sum;
        double avg;

        sum = 0;
        for(int idx=0; idx<arr.length; idx++) {
            sum += arr[idx];
        }
        avg = (double) sum / arr.length;

        return avg;
    }

    // 배열 최대값 계산 함수
    public static int calcArrMax(int[] arr) {
        
        int max = arr[0]; //초기값 = arr[0]

        for (int idx=1; idx<arr.length; idx++) {
            if (arr[idx] > max) {
                max = arr[idx];
            }
        }
        return max;
    }

    // 배열 최소값 계산 함수
    public static int calcArrMin(int[] arr) {

        int min = arr[0]; //초기값 = arr[0]

        for (int idx=1; idx<arr.length; idx++) {
            if (arr[idx] < min) {
                min = arr[idx];
            }
        }
        return min;
    }

    public static void main(String[] args) {

        int max, min;
        double avg;

        // 배열 생성
        int[] arr = creatArr();

        // 값 계산
        max = calcArrMax(arr);
        min = calcArrMin(arr);
        avg = calcArrAvg(arr);

        // 결과 출력
        System.out.printf("average : %.2f\n", avg);
        System.out.printf("max : %d\n", max);
        System.out.printf("min : %d\n", min);
    }
}
