//백준 1476 날짜 계산
//https://www.acmicpc.net/problem/1476

#include <stdio.h>

int main() {

    int earth = 1, sun = 1, moon = 1;
    int E, S, M;
    int year = 1;
    scanf("%d %d %d", &E, &S, &M);

    while (1) {
        if ((earth == E) && (sun == S) && (moon == M)) {
            goto point;
        }

        earth++;
        sun++;
        moon++;
        year++;

        if (earth == 16) earth = 1;
        if (sun == 29) sun = 1;
        if (moon == 20) moon = 1;
    }
    point :
    printf("%d", year);
    
    return 0;
}