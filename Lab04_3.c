//백준 11365 !밀비 급일
//https://www.acmicpc.net/problem/11365

#include<stdio.h>
#include<string.h>

int main() {

    char code[501];    
    
    while (1) {
        scanf("%[^\n]s", code);
        if (strcmp(code, "END") == 0) break;

        for (int i = strlen(code) - 1; i >= 0; i--) {
            printf("%c", code[i]);
        }
        printf("\n");
        getchar();
        
    }
    

    return 0;
}