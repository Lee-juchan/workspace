/*
    #apdix 01-01 / 23.04.14 leejuchan

    @brief : 스택 구현
    @details : push(), pop(), isFull(), isEmpty(), printStack()
*/

import java.util.Scanner;

public class SimpleStack {

    // *****************************
    // 굳이 public xxx, 전역이기 때문에 private로 다 설정해도 좋음
    public final static int STACK_SIZE = 5;
    public static int[] stack = new int[STACK_SIZE];
    public static int top = -1;


    // 스택 상태 확인 함수              / stack overflow 방지
    public static boolean isFull() {
        return top == STACK_SIZE - 1;
    }
    public static boolean isEmpty() {
        return top == -1;
    }


    // 스택 요소 저장 함수
    // *******************************
    // 리턴값 void보다 뭐라도 리턴하는 걸 지향함
    public static int push(int[] stack, int data) {

        if(!isFull()) {
            stack[++top] = data;
            return data;
        } else {
            System.out.println("Error, ");
            return -1;
        }
    }


    // 스택 요소 제거(반환) 함수
    public static int pop(int[] stack) {

        if(!isEmpty()) {
            return stack[top--];
        } else {
            System.out.println();
            return -1;
        }

        
    }


    // 스택 출력 함수
    public static void printStack(int[] stack) {

        System.out.println("------------");
        System.out.println("Stack 상태");

        // top위치 기준 출력
        for(int i=top; i>-1; i--) {
                System.out.println(stack[i]);
        }

        System.out.println("------------");
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String kin;
        
        do {
            System.out.println("1. push()");
            System.out.println("2. pop()");
            System.out.println("3. print Stack");
            System.out.println("s. Stop");

            kin = sc.next(); // keyboard in

            
            // ************************************
            // 나중에 Switch로 구현해보자
            if (kin.equals("1")) {

            } else if(kin.equals("2")) {

            } else if(kin.equals("3")) {
                
            } else if(kin.equals("2")) {
                
            } else {
                System.out.println("Error, Input again");
            }
        } while (!kin.equals("s"));


    }
}
