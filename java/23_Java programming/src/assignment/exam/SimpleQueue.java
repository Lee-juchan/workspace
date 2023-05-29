package assignment.exam;

import java.util.Scanner;
import java.util.Random;

public class SimpleQueue {
    private static int QUEUE_SIZE = 5;
    private static int[] queue = new int[QUEUE_SIZE];
    private static int front = 0;
    private static int rear = 0;

    public static boolean isFull() {
        return (rear == QUEUE_SIZE);
    }

    public static boolean isEmpty() {
        return (front == rear);
    }

    // 큐가 끝났는지(사용 가능한지) 체크
    public static boolean isDisable() {
        return (front == rear) && (rear == QUEUE_SIZE);
    }

    // 큐 요소 저장 함수
    public static int enqueue(int data) {
        if ((!isDisable()) && (!isFull())) {
            queue[rear++] = data;
            return data;
        } else {
            return -1;
        }
    }

    // 큐 요소 제거(반환) 함수
    public static int dequeue() {
        if((!isDisable()) && (!isEmpty())) {
            return queue[front++];
        } else {
            return -1;
        }
    }

    // 큐 출력 함수
    public static void printQueue() {
        // System.out.println(" < Queue 상태 >");
        // System.out.printf("QSize: %d, front: %d, rear: %d\n", QUEUE_SIZE, front, rear);

        if ((isDisable())) {
            System.out.println("Queue is disable");
        } else if (isEmpty()) {
            System.out.println("Queue is Empty");
        } else {
            // front, rear위치 기준 출력
            System.out.print("element: [ ");
            for (int i = front; i < rear; i++) {
                System.out.printf("%d ", queue[i]);
            }
            System.out.println("]");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rd = new Random();

        String kin = "";
        int result;
        do {
            System.out.println("----------------");
            System.out.println("1. store");
            System.out.println("2. delete");
            System.out.println("3. print Queue");
            System.out.println("s. stop");
            System.out.println("----------------");

            kin = sc.next();
            if (kin.equals("1")) {
                result = enqueue(rd.nextInt(500) + 1);
                if(result == -1) {
                    System.out.println("Error, Queue is Full!");
                } else {
                    System.out.printf("-> stored : %d\n", result);
                }
            } else if(kin.equals("2")) {
                result = dequeue();
                if(result == -1) {
                    System.out.println("Error, Queue is Empty!");
                } else {
                    System.out.printf("-> deleted : %d\n", result);
                }
            } else if (kin.equals("3")) {
                printQueue();
            } else {
                if (!kin.equals("s")) {
                    System.out.println("Error, Input again");
                }
            }
        } while(!kin.equals("s"));

        System.out.println("End");
        sc.close();
    }
}
