/*
    #practice 01-06 / 23.04.01 leejuchan

    @brief : 문자를 이용한 업다운 게임
    @details : 정답 문자을 정하고, 입력받은 문자가 크거나 작을 경우 up|dowm 출력, 맞출때까지 반복
*/

package practice.prac01;

import java.util.Scanner;

public class Guess {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        char rightCh = 'e';
        char guessCh;
        
        // 0을 입력시 up이 안 나오도록, do while 대신, while 사용
        System.out.println("I'm thinking of a letter a~z (quit to '0')");    
        System.out.print("Guess it : ");
        guessCh = sc.next().charAt(0);

        while (guessCh != '0') {

            // 문자 입력
            System.out.print("Guess it : ");
            guessCh = sc.next().charAt(0);

            // 일치 여부 확인, 힌트 제공
            if (guessCh > rightCh) {
                System.out.println("down");
            } else if (guessCh < rightCh) {
                System.out.println("up");
            } else {
                System.out.println("right!");
                break;
            }
        }

        sc.close();
    }
}
