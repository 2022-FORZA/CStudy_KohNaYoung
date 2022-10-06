//백준 5988 홀수일까 짝수일까
//https://www.acmicpc.net/problem/5988

#include<stdio.h>
#include<string.h>

int main() {

    int N;
    char testCase[61];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", testCase);

        if ( (testCase[strlen(testCase)-1] - 48) % 2 != 0 ) {
            printf("odd\n");
        }
        else printf("even\n");
    }
    return 0;
}