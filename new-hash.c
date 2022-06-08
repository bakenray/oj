/*************************************************************************
	> File Name: new-hash.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jun 2022 05:43:47 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

void f(char str[]) {
    int arr[32] = {0}, bits[32] = {0};
    int k = strlen(str);
    for(int i = 1; i <= k; i++) {
        arr[i % 32] += str[i - 1];
    }
    for(int j = 0; j <= 31; j++) {
        bits[j] += arr[31 - j] ^ (arr[j] << 1);
        printf("%c", bits[j] % 85 + 34);
    }
    printf("\n");
}

int main() {
    char str[505];
    scanf("%s", str);
    f(str);
    return 0;
}
