#include <stdio.h>

int main() {
    int basic = 660, use, total;
    double per, tax, real_income;

    basic = 660;
    per = 88.5;

    printf("전기 사용량을 입력하세요 (kw) : ");
    scanf("%d", &use);
//  use = 300;

    total = basic + use * per;
    tax = total * 0.09;
    real_income = total - tax;

    printf("전기 사용량은 %lf원입니다.\n", real_income);

    return 0;
}