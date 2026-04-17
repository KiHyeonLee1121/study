#ifndef DATE_H
#define DATE_H

class Date
{
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int) const;  // 입력된 일이 올바른지 검사하는 함수

public:
    static const unsigned int monthsPerYear = 12;

	explicit Date(int = 1, int = 1, int = 1900);      // 오류발생 시 기본값 1/1/1900 사용

    void print() const;

    ~Date();
};

#endif


// 생성자 및 소멸자 호출 시 Date object constructor for date [해당 날짜]
// Date object destructor for date [해당 날짜]
// Date object constructor for date 3/7/2000
// 뭐 이런 식으로 출력됨
// Date 클래스를 생성하는 동안 오류가 발생하면,
// 오류 메시지를 출력하고 기본값 1 / 1 / 1900 을 사용

// 날짜 오류는 
// 일이 1보다 작거나, 해당 월/연도의 최대 일 수를 초과하는 경우
// Error: Invalid day for current month and year
// 월이 1보다 작거나 12보다 큰 경우
// Error: Month must be 1-12