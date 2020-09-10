#include <stdio.h>

int main() {
    char bNumber;
    double avg;
    int age;

    printf("등번호를 입력하세요 : ");
    scanf("%c", &bNumber);
    printf("타율을 입력하세요 : ");
    scanf("%lf", &avg);
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);


//    bNumber = '5';
//    avg = 0.324;
//    age = 28;   

    printf("%c번 선수의 타율은 %lf이고 나이는 %d살입니다.\n", bNumber, avg, age);

    return 0;
}