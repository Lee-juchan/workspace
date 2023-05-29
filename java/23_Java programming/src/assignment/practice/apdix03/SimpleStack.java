package assignment.practice.apdix03;
/*
    #apdix 01-01 / 23.04.14 leejuchan

    @brief : 스택 구현
    @details : push(), pop(), isFull(), isEmpty(), printStack()
*/

import java.util.Scanner;
import java.util.Random;

public class SimpleStack {

    // private로 설정해도 좋음!
    private final static int STACK_SIZE = 5;
    private static int[] stack = new int[STACK_SIZE];
    private static int top = -1;

    // 스택 상태 확인 함수 (stack overflow 방지)
    public static boolean isFull() {
        return (top == STACK_SIZE - 1);
    }

    public static boolean isEmpty() {
        return (top == -1);
    }

    // 스택 요소 저장 함수
    // top을 증가하고, 값을 저장한다.
    // 이상이 있을 경우 -1, 없을 경우 저장한 데이터를 반환한다.
    public static int push(int data) {
        if (!isFull()) {
            stack[++top] = data;
            return data;
        } else {
            return -1;
        }
    }

    // 스택 요소 제거(반환) 함수
    // 값을 제거하고, top을 감소한다.
    // 이상이 있을 경우 -1, 없을 경우 삭제한 데이터를 반환한다.
    public static int pop() {
        if (!isEmpty()) {
            return stack[top--];
        } else {
            return -1;
        }
    }

    // 스택 출력 함수
    public static void printStack() {
        System.out.println(" < Stack 상태 >");
        // top위치 기준 출력
        for (int i = 0; i <= top; i++) {
            System.out.printf("%d ", stack[i]);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rd = new Random();
        int result;
        String kin = "";
        do {
            System.out.println("----------------");
            System.out.println("1. push()");
            System.out.println("2. pop()");
            System.out.println("3. print Stack");
            System.out.println("s. Stop");
            System.out.println("----------------");

            // 입력값에 따른 처리
            kin = sc.next(); // keyboard in
            if (kin.equals("1")) {
                result = push(rd.nextInt(20));
                if (result == -1) {
                    System.out.println("Error, Stack is Full!");
                } else {
                    System.out.printf("Input : %d\n", result);
                }
            } else if (kin.equals("2")) {
                result = pop();
                if (result == -1) {
                    System.out.println("Error, Stack is Empty!");
                } else {
                    System.out.printf("Output : %d\n", result);
                }
            } else if (kin.equals("3")) {
                printStack();
            } else if (kin.equals("2")) {
            } else {
                if (!kin.equals("s")) {
                    System.out.println("Error, Input again");
                }
            }

            // switch로 구현 가능????
            // String이라 단순비교는 주소만 비교됨, equals를 switch에서 사용 가능??
            // switch(kin)
            // {
            // case kin.equals("1") :
            // }
        } while (!kin.equals("s"));

        System.out.println("End");
        sc.close();
    }
}
