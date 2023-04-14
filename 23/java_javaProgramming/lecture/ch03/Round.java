/*
    #lecture 03-01
    #practice 01-02 / 23.04.01 leejuchan

    @brief : 원의 넓이, 둘레 구하기
    @details : radius 입력받기
*/

package ch03;

import java.util.Scanner;

public class Round {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        final double PI = 3.14;
        double circumference;
        double circleArea;

        System.out.print("Input Radius: ");
        int radius = sc.nextInt();

        circumference = 2 * PI * radius;
        circleArea = PI * radius * radius;

        System.out.printf("circumference : %.1f\n", circumference);
        System.out.printf("circleArea : %.1f\n", circleArea);

        sc.close();
    }
}
