//백준 2309 일곱 난쟁이
//https://www.acmicpc.net/problem/2309

#include <stdio.h>

int main() {

    int heights[9];
    int temp_sum = 0, diff, except1, except2;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &heights[i]);
        temp_sum += heights[i];
    }

    diff = temp_sum - 100;

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (heights[i] + heights[j] == diff) {
                heights[i] = 0;
                heights[j] = 0;
                goto point;
            }
            else ;
        }
    }

    point:
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (heights[i] > heights[j]) {
                int temp = heights[i];
                heights[i] =  heights[j];
                heights[j] = temp;
            }
        }
    }
    
    for (int i = 2; i < 9; i++) {
        printf("%d\n", heights[i]);
    }
   
    return 0;
}