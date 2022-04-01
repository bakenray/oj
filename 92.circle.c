/*************************************************************************
	> File Name: 92.circle.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2022 11:05:11 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    double r,a;
    scanf("%lf",&r);
    a = (int) ceil((int)(PI*pow(r,2)*1000)) / 1000.0;
    printf("%.2lf\n",2 * PI * r);
    printf("%.2lf\n",a);

    return 0;
}
