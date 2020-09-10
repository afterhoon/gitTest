#include <stdio.h>

int main () {
    int age;
    double avg;
    char bNumber, name[80], position[80];
//    bNumber = '5';
//    age = 28;
//    avg = 0.324;

    printf("등번호를 입력하세요 : ");
    scanf("%c", &bNumber);
    printf("이름을 입력하세요 : ");
    scanf("%s", &name);
    printf("포지션을 입력하세요 : ");
    scanf("%s", &position);
    printf("타율을 입력하세요 : ");
    scanf("%lf", &avg);
    pritnf("나이를 입력하세요 : ");
    scanf("%d", &age);

    printf("%c-%s-%s, 타율은 %lf이고 나이는 %d살입니다.\n", bNumber, name, position, avg, age);

    return 0;
}