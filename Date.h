#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include "Date.h"

class BankAccount
{
private:
    int accountNumber;
    std::string userName;
    Date* BirthDate;    // Date 객체의 주소만 저장. 포인터로 안한다고 문제가 생기진 않음.
    int balance;        // 그냥 문제에서 포인터로 저장하길 요구했을 뿐임.
     
public:
    explicit BankAccount(int = 0, std::string = "", int = 1, int = 1, int = 1900, int = 0);

    void deposit(int money);

    void withdraw(int money);

    int Check();

    void printAll();             // 모든 정보를 정해진 형식으로 출력함

    std::string getUserName();

    ~BankAccount();
};

#endif


// 세 사람의 계좌정보를 객체 배열로 저장
// 여기에선 클래스 사이의 포함관계를 이용하여 Date 객체를 BankAccount 클래스의 멤버로 포함시킴
// 생일(Date 객체를 가리키는 포인터)
// 내 생일 정보는 내가 직접 숫자 3개로 관리하는 게 아니라, Date에게 맡긴다 -> has-a 관계
