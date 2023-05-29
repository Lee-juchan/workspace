/*
    #assignment 03 / 23.04.21 leejuchan

    @brief : 큐 구현
    @details : + 큐가 다 차면, 큐 길이를 2배로 늘리고 동작하도록
*/

import java.util.Scanner;
import java.util.Random;

public class SimpleQueueAdv {
    private static int QUEUE_SIZE = 5;
    private static int[] queue = new int[QUEUE_SIZE];
    private static int front = -1;
    private static int rear = -1;

    public static boolean isFull() {
        return (rear == QUEUE_SIZE - 1);
    }

    public static boolean isEmpty() {
        return (front == rear);
    }

    // 큐가 끝났는지(사용 가능한지) 체크
    public static boolean isDisable() {
        return (front == rear) && (rear == QUEUE_SIZE - 1);
    }

    // 큐 길이를 2배로 늘리는 함수
    // enqueue실행중에 isFull 또는 isDisable일때 사용
    public static void expendQueue() {
        QUEUE_SIZE *= 2;
        int[] temp = new int[QUEUE_SIZE];
        
        for(int i=0; i<(QUEUE_SIZE/2) - 1; i++) // 요소 복사
        {
            temp[i] = queue[i];
        }
        queue = temp; // 배열 대입 (주소 참조)
    }

    // 큐 요소 저장 함수
    // rear을 증가하고, 값을 저장한다. 저장한 데이터를 반환한다.
    // 큐가 찼거나 사용불가능한 경우 큐를 2배로 늘린다.
    public static int enqueue(int data) {
        if (isDisable() || isFull()) {
            expendQueue();
        }
        queue[++rear] = data;
        return data;
    }

    // 큐 요소 제거(반환) 함수
    // front을 증가하고, 값을 제거한다.
    // 이상이 있을 경우 -1, 없을 경우 삭제한 데이터를 반환한다.
    public static int dequeue() {
        if((!isDisable()) && (!isEmpty())) {
            return queue[++front];
        } else {
            return -1;
        }
    }

    // 큐 출력 함수
    public static void printQueue() {
        System.out.println(" < Queue 상태 >");
        System.out.printf("QSize: %d, front: %d, rear: %d\n", QUEUE_SIZE, front, rear);

        if ((isDisable())) {
            System.out.println("Queue is disable");
        } else {
            // front, rear위치 기준 출력
            for (int i = front + 1; i <= rear; i++) {
                System.out.printf("%d ", queue[i]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rd = new Random();
        int result;
        String kin = "";
        do {
            System.out.println("------------------------------------------------");
            System.out.println("1. enqueue()");
            System.out.println("2. dequeue()");
            System.out.println("3. print Queue");
            System.out.println("s. stop");
            System.out.println("------------------------------------------------");

            kin = sc.next();
            if (kin.equals("1")) {
                result = enqueue(rd.nextInt(10));
                if(result == -1) {
                    System.out.println("** Error, Queue is Full!");
                } else {
                    System.out.printf("-> Input : %d\n", result);
                }
            } else if(kin.equals("2")) {
                result = dequeue();
                if(result == -1) {
                    System.out.println("** Error, Queue is Empty!");
                } else {
                    System.out.printf("-> Output : %d\n", result);
                }
            } else if (kin.equals("3")) {
                printQueue();
            } else {
                if (!kin.equals("s")) {
                    System.out.println("** Error, Input again");
                }
            }
        } while(!kin.equals("s"));

        System.out.println("-> End");
        sc.close();
    }
}
