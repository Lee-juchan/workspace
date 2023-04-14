/*
    #practice 01-04 / 23.04.01 leejuchan

    @brief : 1~n까지 합 출력
*/

package practice.prac01;    

import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Input Number: ");
        int number = sc.nextInt();

        int sum = 0;
        for(int i=1; i<=number; i++) {
            sum += i;
        }

        System.out.printf("accumulate 1 ~ %d : %d", number, sum);
        
        sc.close();
    }
}
