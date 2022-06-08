/*************************************************************************
	> File Name: modify-permissions.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Jun 2022 09:55:15 AM CST
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int priv = 0;
    char s[5];
    memset(s,0,sizeof(s));
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        switch(s[i]) {
            case 'r' :
                priv |= 4;
                break;      
            case 'w' :
                priv |= 2;
                break;    
            case 'x' :
                priv |= 1;
                break;                                    
        }    
    }
    while(scanf("%s",s) != EOF) {
        if(strcmp(s, "+r") == 0) {
            priv |= 4;        
        } else if(strcmp(s, "+w") == 0) {
            priv |= 2;
        } else if(strcmp(s, "+x") == 0) {
            priv |= 1;       
        } else if(strcmp(s, "-r") == 0) { 
            priv &= 3;
        } else if(strcmp(s, "-w") == 0) { 
            priv &= 5;
        } else if(strcmp(s, "-x") == 0) {
            priv &= 6;
        } else {
            continue;        
        }
    }
    printf("%d\n",priv); 
}

