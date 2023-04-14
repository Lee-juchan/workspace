/*
    #lecture_exam 06-01 / 23.04.08 leejuchan

    @brief : String 사용 예제
    @details : String 생성(리터럴, new), String 함수, String format
*/

package ch06;

public class StringExam {
    public static void main(String[] args) {

        /*String 생성 _ 리터럴, new 차이*/ 
        String a = "hello";
        String b = "hello";
        String c = new String("hello");

        System.out.printf("a == b : %b\n", a == b);
        System.out.printf("a == c : %b\n", a == c); // 객체 비교
        System.out.printf("a.equals(c) : %b\n\n", a.equals(c)); // 내용 비교



        /*String 함수 사용*/
        String str = "Hello, world!";

        // length() : 문자열 길이
        int length = str.length(); 
        
        // charAt(n) : n번째 인덱스의 문자
        char firstChar = str.charAt(0); // 'H'
        char lastChar = str.charAt(length - 1); // '!'
        
        // substring(x,y) : x~y까지 문자열 추출
        String subStr = str.substring(7, 12); // "world"
        
        
        // toLowerCase|toUpperCase() : 모두 소문자|대문자로 변환
        String lowerCaseStr = str.toLowerCase(); // "hello world!"
        String upperCaseStr = str.toUpperCase(); // "HELLO WORLD!"

        // replace(x, y) : 문자 x를 문자y로 대체 
        String replacedStr = str.replace('o', 'x'); // "hellx wxrld!"
        
        // indexOf(s) : 문자열 s의 인덱스 추출
        int index = str.indexOf("world");
        
        // trim() : 앞뒤 공백 제거한 문자열 추출
        String trimmedStr = str.trim();
        
        // split(,) : 콤마를 기준으로 문자열 분리 -> 배열에 저장
        String[] splitStrArr = str.split(",");

        System.out.printf("length : %d\n", length);

        System.out.printf("firstChar : %c\n", firstChar);
        System.out.printf("lastChar : %c\n", lastChar);

        System.out.printf("subStr : %s\n", subStr);

        System.out.printf("lowerCaseStr : %s\n", lowerCaseStr);
        System.out.printf("upperCaseStr : %s\n", upperCaseStr);

        System.out.printf("replacedStr : %s\n", replacedStr);

        System.out.printf("index : %d\n", index);

        System.out.printf("trimmedStr : %s\n", trimmedStr);

        System.out.printf("splitStrArr[0] : %s\n", splitStrArr[0]);
        System.out.printf("splitStrArr[1] : %s\n\n", splitStrArr[1]);
        


        /*String 포맷 출력*/
        int x = 12;
        double y = 3.141592;
        String s = "Hello, world!";
        
        // format() : 형식에 맞춰진 문자열 반환
        String FormatedStr = String.format("x = %d, y = %.2f, s = %s\n", x, y, s); 
        System.out.print(FormatedStr);
        
        // printf() + format : 주어진 형식대로 일괄적으로 데이터 출력가능
        String format = "x = %d, y = %.2f, s = %s\n";
        System.out.printf(format, x, y, s);
        System.out.printf(format, 1, 2.789, "가나다");

    }
}
