/*
    #lecture 06-04 / 23.04.09 leejuchan    

    @brief : n개의 숫자 중 하나를 숨기고, 없는 숫자 찾기

    
    @note: prof, 중복없이 배열 만들기 = 배열 만들고 인덱스를 섞는다(스왑함수), 섞인 배열의 n-1번째 까지만 복사해서 만든다.
            남는 숫자 찾기 = 원본 배열 총합 구하고, 현 배열 총합 빼면 남는것을 나옴
*/

package ch06;

import java.util.Scanner;
import java.util.Random;

public class FindNumber {

    // 배열 난수입력 함수
    public static int[] createRandomArr() {
        
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        int range;
        int[] arr;
        int exceptedNum;
        int randIdx;

        System.out.print("Input range : ");
        range = sc.nextInt();

        arr = new int[range - 1];
        exceptedNum = 1 + rand.nextInt(range-1);

        // 배열 요소 입력
        for(int num=1; num <= range; num++) {

            // 제외된 숫자는 무시
            if (num == exceptedNum) {
                continue;
            }

            // 값이 없는 랜덤 인덱스 찾기
            do {
                randIdx = rand.nextInt(range-1);
            }
            while(arr[randIdx] != 0);

            arr[randIdx] = num;
        }

        return arr;
    }

    // 제외된 숫자 찾는 함수
    public static int findNum(int[] arr) {

        int exceptedNum;
        int total;
        int sum;

        total = (arr.length + 1) * (arr.length + 2) / 2;
        sum = 0;
        for (int i=0; i<arr.length; i++) {
            sum += arr[i];
        } 

        exceptedNum = total - sum;

        return exceptedNum;
    }

    // 배열 출력 함수
    public static void printArr(int[] arr) {
        
        for(int i=0; i<arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        int[] arr = createRandomArr();
        System.out.print("arr : ");
        printArr(arr);

        int exceptedNum = findNum(arr);
        System.out.println("Num : " + exceptedNum);
    }
}
