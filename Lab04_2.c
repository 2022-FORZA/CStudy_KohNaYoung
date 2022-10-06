//백준 10845 큐
//https://www.acmicpc.net/problem/10845

#include<stdio.h>
#include<string.h>


int main() {
    int queue[10000] = {0, };
    int size = 0;
    int N;
    char order[10];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", order);

        if (strcmp(order, "push") == 0) {
            scanf("%d", &queue[size]);
            size++;

        }
        else if (strcmp(order, "pop") == 0) {
            if (queue[0] == 0) printf("-1\n");
            else {
                printf("%d\n", queue[0]);
                for (int i = 0; i < size; i++) {
                    queue[i] = queue[i+1];
                }
                size--;
            }
        }
        else if (strcmp(order, "size") == 0) {
            printf("%d\n", size);

        }
        else if (strcmp(order, "empty") == 0) {
            if (queue[0] == 0) printf("1\n");
            else printf("0\n");

        }
        else if (strcmp(order, "front") == 0) {
            if (queue[0] == 0) printf("-1\n");
            else {
                printf("%d\n", queue[0]);
            }
        }
        else if (strcmp(order, "back") == 0) {
            if (queue[0] == 0) printf("-1\n");
            else {
                printf("%d\n", queue[size-1]);
            }
        }
    }
    return 0;
}