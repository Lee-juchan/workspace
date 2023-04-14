/*
    #lecture 03-05
    #practice 01-02 / 23.04.01 leejuchan

    @brief : 건물의 층별 정보 출력하기
    @details : switch문 + 새로운 용법(->, yield)
*/

package ch03;

import java.util.Scanner;

public class BuildingInformation {

    // 해당 층 정보 출력 _ switch
    public static void printFloorInformation(int floor) {

        switch (floor) {
            case 1:
            case 2:
                System.out.println("Starbucks");
                break;
            case 3:
            case 4:
            case 5:
                System.out.println("Dermatology");
                break;
            case 6:
                System.out.println("Academy");
                break;
            case 7:
            case 8:
                System.out.println("Study cafe");
                break;
            case 9:
            case 10:
                System.out.println("Gym");
                break;
            default:
                System.out.println("The floor does Not exist");
        }
    }

    // 해당 층 정보 출력 _ switch 새로운 용법
    // :, break와 ->는 호환안됨
    public static void printFloorInformation_new(int floor) {

        switch (floor) {
            case 1, 2 -> System.out.println("Starbucks"); 
            case 3, 4, 5 -> System.out.println("Dermatology");
            case 6 -> System.out.println("Academy");
            case 7, 8 -> System.out.println("Study cafe");
            case 9, 10 -> System.out.println("Gym");
            default -> System.out.println("The floor does Not exist");                
        }

        // yield로 시설의 임대료 리턴, switch끝에 꼭 ;붙임
        int cost = switch (floor) {
            case 1, 2:
                yield 20;
            case 3, 4, 5:
                yield 30;
            case 6:
                yield 10;
            case 7, 8:
                yield 20;
            case 9, 10:
                yield 20;
            default:
                yield 0;
        };

        System.out.println("cost : " + cost);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // 층수 입력
        System.out.print("Input floor : ");
        int floor = sc.nextInt();

        // 해당 층 정보 출력
        printFloorInformation(floor);
        printFloorInformation_new(floor);

        sc.close();
    }
}
