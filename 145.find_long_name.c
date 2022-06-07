/*************************************************************************
	> File Name: 145.find_long_name.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2022 11:56:19 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main (){

    int n, j;
    char x;
    char max[100] = " ";
    scanf("%d\n", &n);

    for(int i = 0; i < n; ++i, j = 0){
        char name[100] = "";
        while (scanf("%c", &x) != EOF) {
            if (x != '\n') name[j++] = x;
            else {
                if(strlen(name) > strlen(max)) strcpy(max, name);
                break;
            }
        }
    }
    printf("%s\n", max);

    return 0;
}
