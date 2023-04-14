/*
    #lecture 03-07
    #practice 01-03 / 23.04.01 leejuchan

    @brief : 2~9 구구단 출력
*/

package ch03;

public class Mutiply {
    public static void main(String[] args) {

        for(int number = 2; number <= 9; number++) {
            
            System.out.println("---------------------");
            System.out.printf("-%d times-\n", number);

            for(int i=1; i<=9; i++) {
                System.out.printf("%d x %d = %d\n", number, i, number * i);
            }
        }
    }
}
