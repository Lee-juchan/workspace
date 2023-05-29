/* 
    #practice 01-01 / 23.03.28 leejuchan

   @brief : 8개의 동전중 무게가 다른 동전 한개 찾기
   @details : 무게까지 구분 or not

   @note : 일일히 경우의 수를 계산하지 않고, 중복되는 내용을 함수로 처리할 수 있을까???
*/

package assignment.practice.prac01;

public class Coin {

    // @prof
    // 가짜동전 찾기 _ 가벼운지, 무거운지 확인불가
    public static void findFakeCoin(int a, int b, int c, int d, int e, int f, int g, int h) {
        
        if (a+b != c+d) {

            if (a != b) {

                if (a != h) { // h = realCoin
                    System.out.println("fakeCoin : A");
                } else { // (a == h)
                    System.out.println("fakeCoin : B");
                }

            } else { // (a == b)

                if (c != h) { // h = realCoin
                    System.out.println("fakeCoin : C");
                } else {
                    System.out.println("fakeCoin : D");
                }
            }

        } else { // (a+b == c+d)

            if (e != f) {

                if(e != a) { // a = realCoin
                    System.out.println("fakeCoin : E");
                } else {
                    System.out.println("fakeCoin : F");
                }

            } else { // (e == f)

                if(g != a) { // a = realCoin
                    System.out.println("fakeCoin : G");
                } else {

                    // 모두 같으면
                    if(h == a) {
                        System.out.println("fakeCoin : Not exist!");
                        return;
                    }
                    System.out.println("fakeCoin : H");
                }
            }
        }
    }

    // 가짜 동전 찾기 _ 가벼운지, 무거운지 확인가능
    public static void findFakeCoin_Weight(int a, int b, int c, int d, int e, int f, int g, int h) {

        if (a+b+c > d+e+f) { // abcdef => fakeCoin
        
            if (a+b > c+d) { // ab => heavier | d => lighter
            
                if (a > b) {
                    System.out.println("fakeCoin : A -> heavier");
                } else if (a < b) {
                    System.out.println("fakeCoin : B -> heavier");
                } else { // (a == b)
                    System.out.println("fakeCoin : D -> lighter");
                }

            } else if (a+b < c+d) { // c => heavier
                System.out.println("fakeCoin : C -> heavier");

            } else { // (ab == cd) // ef => lighter

                if (e > f) {
                    System.out.println("fakeCoin : F -> lighter");
                } else if (e < f) {
                    System.out.println("fakeCoin : E -> lighter");
                } else { // (e == f) 존재 할 수 없음  
                    System.out.println("Error");
                }
            }
        }
        else if (a+b+c < d+e+f) { // abcdef => fakeCoin

            if (a+b > c+d) { // c => lighter
                System.out.println("fakeCoin : C -> lighter");
            } else if (a+b < c+d) { // ab => lighter | d => heavier

                if (a > b) {
                    System.out.println("fakeCoin : B -> lighter");
                } else if (a < b) {
                    System.out.println("fakeCoin : A -> lighter");
                } else { // (a == b)
                   System.out.println("fakeCoin : D -> heavier");
                }

            } else { // (ab == cd) // ef -> heavier

                if (e > f) {
                    System.out.println("fakeCoin : E -> heavier");
                } else if (e < f) {
                    System.out.println("fakeCoin : F -> heavier");
                } else { // (e == f) 존재 할 수 없음
                    System.out.println("Error");
                }
            }
        }
        else { // (abc == def) // gh => fakeCoin

            if (g > a) {
                System.out.println("fakeCoin : G -> heavier");
            } else if (g < a) {
                System.out.println("fakeCoin : G -> lighter");
            } else { // (g == a) // g => realCoin, h => fakeCoin
                
                if (h > a) {
                    System.out.println("fakeCoin : H -> heavier");
                } else if (h < a) {
                    System.out.println("fakeCoin : H -> lighter");
                } else { // (h == a)
                    System.out.println("fakeCoin : Not exist!");
                }
            }
        }
    }

    public static void main(String[] args) {

        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int e = 0;
        int f = 0;
        int g = 0;
        int h = 1;

        // 결과 출력
        System.out.println("---------------------------------");
        findFakeCoin(a, b, c, d, e, f, g, h);
        findFakeCoin_Weight(a, b, c, d, e, f, g, h);
    }
}