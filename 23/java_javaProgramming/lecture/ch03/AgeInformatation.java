/*
    #lecture 03-04 / 23.04.01 leejuchan

    @brief : 나이에 따라 분류하는 프로그램 
    @details : if-else if문 | switch문
*/

package ch03;

import java.util.Scanner;

public class AgeInformatation {

    // 나이 분류 _ else-if문
    public static void ageClassfy_if(int age) {

        if (age < 8) {
            System.out.println("-> preschool child");
        } else if (age >= 8 && age < 14) {
            System.out.println("-> elementary school child");
        } else if (age >= 14 && age <17) {
            System.out.println("-> middle school child");
        } else if (age >= 17 && age < 20) {
            System.out.println("-> high school child");
        } else { //(age > 20)
            System.out.println("-> 2adult");
        }
    }

    // 나이 분류 _ switch문
    public static void ageClassfy_switch(int age) {

        switch(age) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                System.out.println("-> preschool child");
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
                System.out.println("-> elementary school child");
                break;
            case 14:
            case 15:
            case 16:
                System.out.println("-> middle school child");
                break;
            case 17:
            case 18:
            case 19:
                System.out.println("-> high school child");
                break;
            default:
                System.out.println("-> adult");
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input Age : ");
        int age = sc.nextInt();

        ageClassfy_if(age);
        ageClassfy_switch(age);

        sc.close();
    }
}
