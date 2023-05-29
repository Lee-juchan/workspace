/*
    #lecture 05-03 / 23.04.01 leejuchan

    @brief : 매출 데이터 계산, (2차원 배열)
*/

package lecture.ch05;

public class SalesArray {

    // 2차원배열 요소총합 계산
    public static int calcTotal(int[][] arr) {

        int total = 0;

        for (int row = 0; row < arr.length; row++) {

            for (int column = 0; column < arr[0].length; column++) {
                total += arr[row][column];
            }
        }

        return total;
    }

    // (1차원)배열 값 평균계산
    public static double calcAvg(int[] arr) {

        int sum;
        double avg;

        sum = 0;
        for (int idx = 0; idx < arr.length; idx++) {
            sum += arr[idx];
        }

        avg = (double) sum / arr.length;

        return avg;
    }

    public static void main(String[] args) {

        int total;

        int[][] salesArr = { { 90, 90, 110, 110 },
                { 120, 110, 110, 90 },
                { 200, 210, 200, 220 } };

        // 총액 출력
        total = calcTotal(salesArr);
        System.out.println("total : " + total);

        // 연평균 매출 출력
        for (int i = 0; i < salesArr.length; i++) {
            System.out.printf("%d average : %.2f\n", 2010 + i, calcAvg(salesArr[i]));
        }
    }
}
