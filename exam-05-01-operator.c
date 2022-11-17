
/*
 * 연산자
 *
 * 1. 산술 연산자
 * +, -, *, /, %
 *
 * 2. 대입 연산자
 *  =, +=, -=, *=,  /=, %=
 *
 * 3. 비교 연산자
 *  >   : 크다
 *  >=  : 크거나 같다
 *  <   : 작다
 *  <=  : 작거나 같다
 *  ==  : 같다
 *  !=  : 다르다
 *
 * 연산자 우선순위
 *  1) ++, --
 *  2) +, - 부호연산자(양수, 음수)
 *  3) *, /, %
 *  4) +, - 덧셈, 뺄셈
 *  5) <, >, <=, >=
 *  6) ==, !=
 *  7) =, +=, -=, *=, /=, %=
 *
 */

#include <stdio.h>


int main() {

    //산술 연산자
    int num1 = 7, num2 = 3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    // 7 + 3 = 10
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    // 7 - 3 = 4
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    // 7 * 3 = 21
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    // 7 / 3 = 2
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    // 7 % 3 = 1

    //대입 연산자
    int num3 = 3, num4 = 4;
    num3 += 3;
    num4 += 4;

    printf("num3 += 3 의 결과 : %d\n", num3);
    // num3 += 3 의 결과 : 6
    printf("num4 += 4 의 결과 : %d\n", num4);
    // num4 += 4 의 결과 : 8

    //비교 연산자
    int a = 10, b = 11;
    printf("a == b : %d\n", a == b);
    // a == b : 0
    printf("a > b : %d\n", a > b);
    // a > b : 0
    printf("a >= b : %d\n", a >= b);
    // a >= b : 0
    printf("a < b : %d\n", a < b);
    // a < b : 1
    printf("a <= b : %d\n", a <= b);
    // a <= b : 1
    printf("a != b : %d\n", a != b);
    // a != b : 1

    return 0;
}
