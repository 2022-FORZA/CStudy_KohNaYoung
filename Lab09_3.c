//백준 2628 종이자르기
//https://www.acmicpc.net/problem/2628

#include <stdio.h>

int main() {

    int width, height, count, maxWidth, maxHeight,
        index1 = 0, index2 = 0;
    scanf("%d %d %d", &width, &height, &count);

    int widthlist[count+1], //잘리는 세로점선의 번호를 저장할 배열
        heightlist[count+1]; //잘리는 가로점선의 번호를 저장할 배열
    
    for (int i = 0; i < count; i++) { //자르는 점선 정보 저장
        int temp1, temp2;
        scanf("%d %d", &temp1, &temp2);

        if (temp1 == 0) { //가로로 자르는 점선 : 세로배열에 저장
            heightlist[index2] = temp2;
            index2++;
        }
        else { //세로로 자르는 점선 : 가로배열에 저장
            widthlist[index1] = temp2;
            index1++;
        }
    }

    //가로배열 정렬
    for (int i = 0; i < index1; i++) {
        for (int j = i + 1; j < index1; j++) {
            if (widthlist[i] > widthlist[j]) {
                int temp = widthlist[i];
                widthlist[i] =  widthlist[j];
                widthlist[j] = temp;
            }
        }
    }
    //세로배열 정렬
    for (int i = 0; i < index2; i++) {
        for (int j = i + 1; j < index2; j++) {
            if (heightlist[i] > heightlist[j]) {
                int temp = heightlist[i];
                heightlist[i] =  heightlist[j];
                heightlist[j] = temp;
            }
        }
    }
    //최대 가로길이 구하기
    if (index1 == 0) maxWidth = width;
    else {
        maxWidth = widthlist[0];
        for (int i = 0; i + 1 < index1; i++) {
            if (maxWidth < widthlist[i+1] - widthlist[i]) maxWidth = widthlist[i+1] - widthlist[i];
        }
        if (maxWidth < width - widthlist[index1-1]) maxWidth = width - widthlist[index1-1];
    }
    //최대 세로길이 구하기
    if (index2 == 0) maxHeight = height;
    else {
        maxHeight = heightlist[0];
        for (int i = 0; i + 1 < index2; i++) {
            if (maxHeight < heightlist[i+1] - heightlist[i]) maxHeight = heightlist[i+1] - heightlist[i];
        }
        if (maxHeight < height - heightlist[index2-1]) maxHeight = height - heightlist[index2-1];
    }
    printf("%d", maxWidth*maxHeight);

    return 0;
}