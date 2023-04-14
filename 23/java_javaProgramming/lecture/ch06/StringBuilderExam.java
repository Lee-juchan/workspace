/*
    #lecture_exam 06-02 / 23.04.08 leejuchan

    @brief : StringBuilder 사용 예제
    @details : append(), insert(), delete(), replace(), reverse();
*/

package ch06;

import java.lang.StringBuilder;

public class StringBuilderExam {
    public static void main(String[] args) {

        StringBuilder sb = new StringBuilder();

        sb.append("hello");                   // append() : 문자열 추가
        System.out.println("sb : " + sb);

        sb.insert(5, " java");        // insert() : 문자열 삽입
        System.out.println("sb : " + sb);

        sb.delete(5, 7);              // delete() : 문자열 삭제
        System.out.println("sb : " + sb);
        
        sb.replace(5, 8, " c++");   // replace() : 문자열 교체
        System.out.println("sb : " + sb);
        
        sb.reverse();                             // reverse() : 문자열 반전
        System.out.println("sb : " + sb);
    }
}
