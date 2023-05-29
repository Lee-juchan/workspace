/*
    #lecture 03-02
    #practice 01-02 / 23.04.01 leejuchan

    @brief : 논리연산 결과 출력하기
*/

package lecture.ch03;

public class TrueFalseTable {

    public static void printTrueFalse(boolean condition) {
        
        if(condition) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }
    public static void main(String[] args) {

        boolean c1 = true & false; // and
        boolean c2 = true | false; // or

        System.out.print("true & false = ");
        printTrueFalse(c1);
        System.out.print("true | false = ");
        printTrueFalse(c2);
 
    }
}
