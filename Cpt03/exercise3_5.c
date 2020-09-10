#include <stdio.h>

int main() {
    int num = 32767, hour, min, sec;

    hour = num / 3600;
    min = (num - hour * 3600) / 60;
    sec = num - hour * 3600 - min * 60;

    printf("%d초는 %d시간, %d분, %d초입니다.\n", num, hour, min, sec);

    return 0;
}