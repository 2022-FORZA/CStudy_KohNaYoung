// 백준 10828 스택
// https://www.acmicpc.net/problem/10828

#include<stdio.h>
#include<string.h>


int main() {
    int stack[10000] = {0, };
    int size = 0, top;
    int N;
    char order[10];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", order);

        if (strcmp(order, "push") == 0) {
            scanf("%d", &stack[size]);
            top = stack[size];
            size++;

        }
        else if (strcmp(order, "pop") == 0) {
            if (stack[0] == 0) printf("-1\n");
            else {
                printf("%d\n", stack[size-1]);
                stack[size-1] = 0;
                size--;
            }

        }
        else if (strcmp(order, "size") == 0) {
            printf("%d\n", size);

        }
        else if (strcmp(order, "empty") == 0) {
            if (stack[0] == 0) printf("1\n");
            else printf("0\n");

        }
        else if (strcmp(order, "top") == 0) {
            if (stack[0] == 0) printf("-1\n");
            else {
                printf("%d\n", stack[size-1]);
            }
        }
    }
    return 0;
}