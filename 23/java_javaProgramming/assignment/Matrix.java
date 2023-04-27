/*
    #quiz 01 / 23.04.14 leejuchan

    @brief : 행렬 곱셈 연산
    @details : 행렬 생성, 행렬 곱, 행렬 출력 함수 구현
*/

public class Matrix {

    // 행렬 생성 함수
    public static int[][] initialize(int row, int column){

        // 결과 저장 행렬 생성
        int[][] matrix = new int[row][column];

        // 1~20 난수 저장
        for(int i=0; i<row; i++) {
            for(int j=0; j<column; j++) {
                matrix[i][j] = (int) (Math.random() * 20) + 1;
            }
        }

        return matrix;
    }

    // 행렬 곱 함수
    public static int[][] multiply(int[][] A, int[][] B){
        
        int rA = A.length;
        int cA = A[0].length;
        // int rB = B.length; 사실 사용 안함
        int cB = B[0].length;

        // 결과 저장
        int[][] result = new int[rA][cB];

        for(int r=0; r<rA; r++) {
            for(int c=0; c<cB; c++) {

                // 결과행렬[row][column]에 들어갈 값 계산
                int sum = 0;
                
                for(int i=0; i<cA; i++) {
                    sum += A[r][i] * B[i][c];
                }

                result[r][c] = sum;
            }
        }

        return result;
    }

    // 행렬 출력 함수
    public static void printMatrix(int[][] matrix) {

        for(int i=0; i<matrix.length; i++) {
            for(int j=0; j<matrix[0].length; j++) {
                System.out.printf("%2d ", matrix[i][j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args){

        // 행렬 생성
        int[][] A = initialize(5, 3);
        int[][] B = initialize(3, 2);

        // 행렬 곱 저장
        int[][] result = multiply(A, B);

        // 결과 출력
        System.out.println("matrix A");
        printMatrix(A);
        System.out.println("-----------------------");
        
        System.out.println("matrix B");
        printMatrix(B);
        System.out.println("-----------------------");
        
        System.out.println("matrix result");
        printMatrix(result);
        System.out.println("-----------------------");
    }
}