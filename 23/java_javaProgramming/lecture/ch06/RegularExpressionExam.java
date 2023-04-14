/*
    lecture_exam 06-03 / 23.04.08 leejuchan

    @brief : 정규식 = 특정 문자열 검색, 추출, 대체를 편하게 하기 위함 (일반문자 + 메타문자)
    @details : Pattern|Matcher, [^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]
*/

package ch06;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class RegularExpressionExam {
    public static void main(String[] args) {

        // 특정 문자열 찾기
        String text = "The quick brown fox jumps over the lazy dog.";
        String pattern = "brown";

        Pattern p = Pattern.compile(pattern, Pattern.CASE_INSENSITIVE); // 대소문자 무시하고, pattern정의
        Matcher m = p.matcher(text);             // 문자열에서 패턴 검색
        boolean matchFound = m.find();           // 검색 결과
        
        if (matchFound) {
            System.out.println("Found a match!\n");
        } else {
            System.out.println("No match found.\n");
        }


        // 특정 문자열 교체
        String before = "Madam In Eden, I'm Adam";
        String after = before.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]", ""); // 한글, 영어, 숫자 이외의 공백, 특수문자 제거

        System.out.printf("before : %s\n", before);
        System.out.printf("after : %s\n", after);
    }
}
