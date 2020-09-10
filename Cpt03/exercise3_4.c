#include <stdio.h>

int main () {
    int history, literature, entertain, total;
    double avg;

    printf("역사, 문학, 예능 점수를 입력하세요 : ");
    scanf("%d %d %d", &history, &literature, &entertain);
//    history = 60, literature = 90, entertain = 70;

    total = history + literature + entertain;
    avg = total / 3.0;

    printf("총점은 %d이고 평균은 %lf입니다.\n", total, avg);
    
    return 0;
}