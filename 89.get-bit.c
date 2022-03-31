/*************************************************************************
	> File Name: 89.get-bit.c
	> Author: 
	> Mail: 
	> Created Time: Thu 31 Mar 2022 10:54:53 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        if(n>=0&&n<=99){
            printf("%d\n", n / 10);
            printf("%d\n", n % 10);
        }
        else
            printf("out of range!");
    }
    return 0;
}
