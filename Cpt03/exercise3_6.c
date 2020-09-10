#include <stdio.h>

int main() {
    int year, day, hour, min, sec;
    double real_day;

    year = 1;
    real_day = 365.2422;
    day = (int)real_day;
    hour = (real_day - day) * 24;
    min = (real_day - day) * 24 * 60 - hour * 60;
    sec = (real_day - day) * 24 * 60 * 60 - hour * 60 * 60 - min * 60;

    printf("%d년은 %d일, %d시간, %d분, %d초입니다.\n", year, day, hour, min, sec);

    return 0;
}

int isYear(int year) {
    int is;

    if(year/400 == 0) {
        is = 1;
    } else if(year/100 == 0) {
        is = 0;
    } else if(year/4 == 0) {
        is = 1;
    } else {
        is = 0;
    }

    return is;
}