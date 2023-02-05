//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
//#define PI 3.1415926535
#include <math.h>
int main(void){
    double size = 0.0;
    double n =0.0;
    const double PI = acos(-1.0);
    scanf("%lf", &n);

    printf("%.6lf\n", n*n*PI); // 유클리드 기하학에서의 원
    printf("%.6lf\n", n*n*2.0); // 택시 기하학에서의 원
    return 0;
}
