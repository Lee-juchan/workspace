/*
    #lecture 07-03 / 23.04.28 leejuchan

    @brief : 은행 계좌 클래스 구현
    @details : 3개의 계좌 만들어서 내용 출력하기 (Demo)
*/

package lecture.ch07.Account;

public class Account {
    private String accountNum; // 앞에 0이 들어오는 경우, 숫자가 아닌 값이 들어가는 경우
    private String owner;
    private long balance; // 잔액

    // 입금
    public long deposit(long money) {
        return balance += money;
    }

    // 출금
    public long withdraw(long money) {
        if (balance >= money) {
            return balance -= money;
        } else {
            System.out.println("low-balance");
            return -1;
        }
    }

    // 잔액 확인
    public long getBalance() {
        return balance;
    }

    // 계좌 정보 출력
    public void printAccountInformation() {
        System.out.printf("accountNum : %s, owner : %s, balance : %d\n", accountNum, owner, balance);
    }

    // constructor
    public Account(String accountNum, String owner, long balance) {
        this.accountNum = accountNum; // this = 객체의 property / + 상속 시, super = 부모
        this.owner = owner;
        this.balance = balance;
    }
}
