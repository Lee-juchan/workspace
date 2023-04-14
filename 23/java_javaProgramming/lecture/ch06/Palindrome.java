/*
    #lecture 06-02 / 23.04.07 leejuchan

    @brief : 펠린드롬 판별하는 알고리즘 / 대소문자 구분 x, 특수문자 제외

    @note : reverse 함수 사용해서, 거꾸로된 배열과 비교
*/

package ch06;

import java.util.Scanner;
import java.lang.StringBuilder;

public class Palindrome {

    // palindrome 검사 함수
    public static boolean isPalindrome(String inputStr) {

        String str;
        String reverseStr;
        StringBuilder temp;
        
        str = inputStr.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]", "").toLowerCase(); // 공백, 특수문자 제거 + 소문자 변환
        
        temp = new StringBuilder(str);          // StringBuilder의 reverse()를 사용하기 위해 옮김
        reverseStr = temp.reverse().toString(); // 역순 문자열 생성

        return str.equals(reverseStr); // 문자열과 역순문자열 비교해서 결과 출력
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String str;

        while(true) {

            // 문자 입력
            System.out.print("Input sentence : ");
            str = sc.nextLine();

            if (str.equals("q")) { // 종료 조건
                break;
            }

            // palindrome 체크            
            if(isPalindrome(str)) {
                System.out.println("-> Palindrom\n");
            } else {
                System.out.println("-> Not palindrom\n");
            }
        }
        System.out.println("end\n");

        sc.close();
    }
}
