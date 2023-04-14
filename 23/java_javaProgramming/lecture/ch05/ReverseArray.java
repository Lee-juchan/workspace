/*
    #lecture 05-02 / 23.04.01 leejuchan

    @brief : 역순 배열 만들기
    @details : 인덱스 한개 or 두개 사용
*/

package ch05;

import java.util.Scanner;

public class ReverseArray {

    // 배열 출력 함수
    public static void printArr(int[] arr) {
        for (int i=0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // 역순배열 생성 함수
    public static int[] reverseArr(int[] arr) {

        int[] reverseArr = new int[arr.length];

        for(int idx=0; idx < arr.length; idx++){
            reverseArr[idx] = arr[arr.length-1 - idx]; // arr.length-1 = 마지막 인덱스
        }
        
        return reverseArr;
    }
    
    // 역순배열 생성 함수 _ 인덱스 각각 사용
    public static int[] reversArr_prof(int[] arr) {

        int[] reverseArr = new int[arr.length];
        int arrIdx, reverseArrIdx;

        for (reverseArrIdx = 0, arrIdx = arr.length; 
                reverseArrIdx < reverseArr.length; reverseArrIdx++, arrIdx--) { // arr, reversArr 각각 인덱스를 만듬
            reverseArr[reverseArrIdx] = arr[arrIdx]; 
        }

        return reverseArr;
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        // 배열 생성
        int[] arr = new int[10];

        // 값 입력
        System.out.print("Input 10 integers : ");
        for(int idx=0; idx<10; idx++){
            arr[idx] = sc.nextInt();
        }

        // 배열 출력
        System.out.print("원본 배열 : ");
        printArr(arr);

        System.out.print("역순1  배열 : ");
        printArr(reverseArr(arr));

        sc.close();
    }
}
