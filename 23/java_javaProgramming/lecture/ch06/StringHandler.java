/*
    #lecture 06-01 / 23.04.08 leejuchan

    @brief : 문자열 함수 활용 예제
*/

package ch06;

public class StringHandler {

    public static void main(String[] args) {

        // 주어진 문자열
        String str = "To be or not to be, that is quesion.";


        // 1. 문자열 전체 길이
        int length = str.length();
        System.out.println("length : " + length);
        
        // 2. 문자열 대문자 변환
        String upper = str.toUpperCase();
        System.out.println("upper : " + upper);

        // 3. 문자열 공백문자 기준 분할, 분할된 값 출력
        String[] divided = str.split(" ");

        System.out.println("divided : ");
        for(int i=0; i<divided.length; i++) {
            System.out.printf("\t%s\n", divided[i]);
        }
        
        // 4. 문자열 거꾸로 출력
        System.out.print("reverse : ");
        for(int i=str.length()-1; i>=0; i--) {
            System.out.print(str.charAt(i));
        }
        System.out.println();

        // 5. 공백문자 제거, r이 처음 나오는 인덱스 부터 이후 6번째 글자까지 문자열 추출
        String nonSpace = str.replaceAll(" ", "");
        int indexR = nonSpace.indexOf("r");
        String sub = nonSpace.substring(indexR, indexR + 6);
        System.out.println("sub : " + sub);


        // 6. 문자열에서 t의 개수
        String onlyT = str.toLowerCase().replaceAll("[^t]", "");
        System.out.println("'t' : " + onlyT.length());
    }
}