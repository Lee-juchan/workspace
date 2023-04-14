/*
    #lecture 02-01 / 23.04.01 leejuchan

    @brief : 지구-화성 빛 도달시간 (초, 분) 계산
*/

package ch02;

public class Mars {
    
    public static void main(String[] args) {

        final int MarsDistance = 34000000; // mile
        final int lightSpeed = 186000; // mile/sec
        
        double MarsArrivalSec = (double) MarsDistance / lightSpeed;
        double MarsArrivalMin = (double) MarsArrivalSec / 60;

        System.out.printf("Second : %.2f\n", MarsArrivalSec);
        System.out.printf("Minute : %.2f\n", MarsArrivalMin);
    }
}
