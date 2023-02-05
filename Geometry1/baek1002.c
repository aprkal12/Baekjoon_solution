//
// Created by DH on 2023-02-05.
//
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int result = 0;
    for(int i = 0; i<n; i++){
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int sum = r1+r2; // 두 원의 반지름의 합
        int di = abs(r1 - r2); // 두 원의 반지름의 차
        double dist = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

        if(dist == 0 && r1 == r2){ // 두 원이 일치하는 경우
            result = -1;
        }else if(dist == sum || dist == di){ // 원이 외접하거나 내접함
            result = 1;
        }else if(di < dist && dist < sum){ // 원이 두 점에서 만나는 경우{
            result = 2;
        }else{ // 두 원이 만나지 않음
            result = 0;
        }
        printf("%d\n", result);
    }
    return 0;
}