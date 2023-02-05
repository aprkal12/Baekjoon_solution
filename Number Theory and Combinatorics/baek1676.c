//
// Created by DH on 2023-02-04.
//
#include <stdio.h>
int dp[501] = {0,};
int dpfac(int n){ // dp로 팩토리얼 구현하기 -> 열심히 만들었는데 쓸모가 없었다..
    dp[1]=1;
    for(int i = 2; i<=n; i++){
        dp[i] = i;
        dp[i] *= dp[i-1];
    }
    return dp[n];
}
int main(){
    int n;
    scanf("%d", &n);
    //printf("%d\n", dpfac(n));
    int m5;
    int m25;
    int m125;

    m5 = n/5;
    m25 = n/25;
    m125 = n/125;
    printf("%d\n",m5+m25+m125);
    return 0;
}