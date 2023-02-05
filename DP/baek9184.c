//
// Created by DH on 2023-02-03.
//
#include <stdio.h>
int n1, n2, n3;
//int dpfibo(int n){
//    arr[1] = arr[2] = 1;
//    for(int i = 3; i<=n; i++){
//        arr[i] = arr[i-1]+arr[i-2];
//        count2++;
//    }
//}
int dp[51][51][51] = {0,};
int dpgo(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }else if(a > 20 || b > 20 || c > 20){
        a=b=c= 20;
    }
    for(int i = 0; i<=a; i++){
        for(int j = 0; j<=b; j++){
            for(int k = 0; k<=c; k++){
                if(i == 0 || j == 0 || k == 0){
                    dp[i][j][k] = 1;
                }
                else if(i<j && j < k){
                    dp[i][j][k] = dp[i][j][k-1] + dp[i][j-1][k-1] - dp[i][j-1][k];
                }else{
                    dp[i][j][k] = dp[i-1][j][k] + dp[i-1][j-1][k] + dp[i-1][j][k-1] - dp[i-1][j-1][k-1];
                }
            }
        }
    }
    return dp[a][b][c];
}
int main(){
    while(1){
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 == -1 && n2 == -1 && n3 == -1){
            break;
        }
        printf("w(%d, %d, %d) = %d\n" , n1, n2, n3, dpgo(n1,n2,n3));
    }
    return 0;
}