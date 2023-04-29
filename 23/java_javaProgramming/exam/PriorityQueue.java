package exam;

import java.util.Scanner;
import java.util.Random;

public class PriorityQueue {
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

    // 큐 길이를 2배로 늘리는 함수
    public static void expendQueue() {
        System.out.printf("current size : %d, ", QUEUE_SIZE);

        QUEUE_SIZE *= 2;
        System.out.printf("chaged size : %d\n", QUEUE_SIZE);
        int[] temp = new int[QUEUE_SIZE];
        
        for(int i=0; i<(QUEUE_SIZE/2) - 1; i++) // 요소 복사
        {
            temp[i] = queue[i];
        }
        queue = temp; // 배열 대입 (주소 참조)
    }

    // 큐 요소 저장 함수 (내림차순으로 정렬되도록 적당한 위치에 저장)
    public static int enqueue(int data) {
        if (isDisable() || isFull()) { // 사용불가능 또는 다 찼을때 길이 2배 증가
            expendQueue();
        }

        // rear부터 탐색해서, data 보다 작은 수가 없을 때까지 교환하고, 해당 위치에 삽입한다.
        // 결국 front쪽부터 내림차순으로 정렬된다.
        int i;
        for (i = rear; (i > front && queue[i-1] < data); i--) { // 작은수가 없거나, front에 도달할 때까지 반복
                queue[i] = queue[i-1]; // 요소 교환 (사실 상 덮어쓰기)
        }
        queue[i] = data; // 해당 위치 삽입
        rear++;
        return data;
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
