/*
    #lecture 03-06
    #practice 01-07 / 23.04.01 leejuchan

    @brief : 제어문 관련 설명출력
    @details : 목록을 보여주고, 사용자의 키를 입력받아, 사용자가 원하는 항목을 출력함
*/

package lecture.ch03;

import java.util.Scanner;

public class Help {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        char select;
        do {
            // 목록 출력
            System.out.println("------------------");
            System.out.println("1. if");
            System.out.println("2. switch");
            System.out.println("3. for");
            System.out.println("4. while");
            System.out.println("5. do-while");
            System.out.println("q. exit");
            System.out.println("------------------");

            // 원하는 번호 입력받음
            System.out.print("Choose control statement : ");
            select = sc.next().charAt(0);

            // 해당 항목 출력
            switch(select)
            {
                case '1':
                    System.out.println("-> if : 조건에 따라 수행여부 판단"); break;
                case '2':
                    System.out.println("-> switch : 조건에 따라 여러 선택지중 하나를 선택"); break;
                case '3':
                    System.out.println("-> for : 주어진 횟수 만큼 반복"); break;
                case '4':
                    System.out.println("-> while : 조건에 반복"); break;
                case '5':
                    System.out.println("-> do-while : 먼저 한번 반복하고 조건확인"); break;
            }
        } while (select != 'q');
        
        System.out.println("exit");
        sc.close();
    }
}
