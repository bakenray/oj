/*************************************************************************
	> File Name: 39.n-even.c
	> Author: 
	> Mail: 
	> Created Time: Thu 31 Mar 2022 09:45:00 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int begin,n;
    scanf("%d%d",&begin,&n);
    if(begin<0) begin = 0;
    if(begin%2) begin += 1;
    for(int i=0; i<n;i++){
        printf("%d\n",begin);
        begin+=2;
    }
    return 0;
}
