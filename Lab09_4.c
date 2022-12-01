//백준 1212 8진수 2진수
//https://www.acmicpc.net/problem/1212

#include <stdio.h>
#include <string.h>

#define MAX 333335

int main() {

    char octal[MAX];
    scanf("%s", octal);

    if (octal[0] == '0') printf("0");
    else if (octal[0] == '1') printf("1");
    else if (octal[0] == '2') printf("10");
    else if (octal[0] == '3') printf("11");
    else printf("%d%d%d", (((octal[0]-'0')/2)/2), (((octal[0]-'0')/2)%2), (octal[0]-'0') % 2);

    int len = strlen(octal);
    for (int i = 1; i < len; i++) { //조건문에 i < strlen(octal)로 작성하면 시간초과
        printf("%d%d%d", (((octal[i]-'0')/2)/2), (((octal[i]-'0')/2)%2), (octal[i]-'0') % 2);
    }

    return 0;
}
