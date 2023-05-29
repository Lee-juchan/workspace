/*
    #lecture 05-05 / 23.04.01 leejuchan

    @brief : 버블 정렬
    @details : swap함수 사용
*/

package lecture.ch05;

import java.util.Scanner;

public class Bubble {

    // 배열 생성 함수
    public static int[] initializeArr(int length) {
        // 배열 생성
        int[] arr = new int[length]; // 생성시 0으로 초기화

        int num;
        int idx;

        // 배열 요소 입력                       _ 서로다른 요소를 랜덤위치에 입력
        for (num=1; num <= arr.length; num++) {

            // 랜덤 인덱스 검색                 _ 빈 공간(=0) 찾을 때 까지
            do {
                idx = (int) (Math.random() * arr.length);
            } while (arr[idx] != 0);
            
            // 해당 숫자 입력
            arr[idx] = num;
        }

        return arr;
    }

    // 배열 출력 함수
    public static void printArr(int[] arr) {

        for (int idx=0; idx < arr.length; idx++) {
            System.out.printf(arr[idx] + " ");
        }
        System.out.println();
    }

    // 요소 교환 함수
    public static int[] swap(int[] arr, int src, int dst) {
        
        int temp;

        temp = arr[src];
        arr[src] = arr[dst];
        arr[dst] = temp;

        return arr;
    }

    // 버블 정렬
    public static int[] bubbleSort(int[] arr) {
        
        for (int size = arr.length; size > 0; size--) {

            for (int idx=0; idx < size-1; idx++) { //idx+1이 최대 인덱스 넘는것 방지

                if (arr[idx] > arr[idx+1]) {
                    swap(arr, idx, idx+1);
                }
            }
        }
        return arr;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // 배열 길이 입력
        System.out.print("Input length of Array : ");
        int length = sc.nextInt();
        
        // 배열 생성
        int[] arr = initializeArr(length);

        // 배열 출력
        System.out.print("original Array : ");
        printArr(arr);

        bubbleSort(arr);

        System.out.print("  sorted Array : ");
        printArr(arr);

        sc.close();
    }
}
