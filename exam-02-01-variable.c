/*


변수란?
    메모리 공간에 붙여진 이름.
    C 프로그램 사용되는 모든 값은 메모리 공간에 저장.
    메모리 공간에 이름을 붙여 접근 가능.
 변수 선언 및 초기화
    자료형 변수명 = 값
 변수명 규칙
    알파벳, 숫자, 언더바 로만 구성.
    숫자로 시작(X)
    공백 포함(X)
    키워드 변수명(X)
    C언어는 알파벳 대/소문자 구분한다.




*/

#include <stdio.h>

int main(void) {
    int number1, number2; // 두 개의 int형 변수를 한 번에 선언
    number1 = 1;
    number2 = 2;
    int number3 = 3, number4 = 4; // 선언과 초기화 동시 진행

    /* 사용 가능한 변수명들 */
    int num = 3; // int는 ‘정수’를 의미하는 자료형이다
    int number5 = 5;
    int num_ber = 10;
    int Number = 15;

    /* 사용 불가한 변수명들(컴파일 에러 유발) */
    //int hello boy = 3; // 공백 포함
    //int hi#$ = 5; // 특수기호 사용
    //int 8number = 8; // 숫자로 시작
    //int short = 3; // 기능이 있는 키워드


/*
 C언어 기본 자료형 종류
    char	    1바이트	-128 ~ +127
    short	    2바이트	-32,768 ~ +32,767
    int	        4바이트	-2,147,483,648 ~ +2,147,483,647
    long	    4바이트	-2,147,483,648 ~ +2,147,483,647
    long long	8바이트	-9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807
    float	    4바이트	±3.4x10^-37 ~ ±3.4x10^+38
    double	    8바이트	±1.7x10^-307 ~ ±1.7x10^+308
    long double	8바이트 이상	double 이상의 표현범위
*/

// 정의 되어 있지 않은 값을 처리할때 컴파일러는
// 가장 빠르고 정확하게 표현 할 수 있는 자료형으로 선택 처리.
    printf("sizeof(100): %d\n", sizeof(100));
    printf("sizeof(3.14): %d\n", sizeof(3.14));

    char ch1 = 66, ch2 = 'B';
    short sh1 = 67;
    int in1 = 68;

    printf("%c\n", ch1);
    printf("%c\n", ch2);
    printf("%c\n", sh1);
    printf("%c\n", in1);


    return 0;
}