/*************************************************************************
	> File Name: 90.get-bit2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 31 Mar 2022 11:02:08 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    
    while(scanf("%d",&n) != EOF){
        if(n>=100 && n<=999){
            printf("%d\n", n / 100);
            printf("%d\n",  n % 100 / 10);
            printf("%d\n", n % 10 );      
        }
        else
            printf("out of range!");
    }

    return 0;
}
