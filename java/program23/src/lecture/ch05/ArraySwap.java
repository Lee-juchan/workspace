/*
    #lecture 05-04 / 23.04.01 leejuchan

    @brief : 배열요소 바꾸기
    @details : call by reference
*/

package lecture.ch05;

public class ArraySwap {
    
    // 배열 요소 바꾸기
    public static int[] swap(int[] arr, int src, int dst) {
        
        int temp;

        temp = arr[src];
        arr[src] = arr[dst];
        arr[dst] = temp;
        
        return arr;
    }

    // 배열 출력 함수
    public static void printArr(int[] arr) {

        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args){

        int[] arr = {1,2,3,4};

        // 원본배열 출력
        printArr(arr);

        // 요소변경 후 출력
        swap(arr, 0,3);
        printArr(arr);
    }
}
