//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
#include <stdbool.h>
//int dp[1001][1001] = {0};
//int bino(int n, int k){
//    if(k == 0 || k == n){
//        dp[n][k] = 1;
//    }
//    for(int i = 1; i<=n; i++){ // 5 2
//        for(int j = 0; j<=k; j++){
//            if(j == 0 || i == 1 || i == j){
//                dp[i][j] = 1;
//            }else{
//                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
//            }
//        }
//    }
//    return dp[n][k];
//} 입력 크기 때문에 팩토리얼을 구하는 게 아님
long long fuc(int n, int x){
    int num = 0;

    for(long long i =x; n/i >= 1; i*= x){
        num+=n/i;
    } // 2 or 5의 제곱수들을 나눈 값을 전부 더함
    return num;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
//    int num = bino(n,k);
//    char tar[15];
//    sprintf(tar, "%d", num);
//    int count = 0;
//    int idx = 0;
//    while(true){
//        if(tar[idx] == '\0'){
//            break;
//        }
//        idx++;
//    }
//    for(int i = idx-1; i>0; i--){
//        if(tar[i] != '0'){
//            break;
//        }else{
//            count++;
//        }
//    }
//    printf("%d\n", count);
    long long f = 0;
    long long t = 0;

    f = fuc(n, 5) - fuc(n-k, 5) - fuc(k, 5);
    t = fuc(n, 2) - fuc(n-k, 2) - fuc(k, 2);

    printf("%lld\n", f > t ? t : f);


    return 0;
}