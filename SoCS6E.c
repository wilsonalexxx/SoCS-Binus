#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char temp[],int n){
    
    int i;
    char x;
    for (i=0; i<n/2; i++){
        
        x = temp[i];
        temp[i] = temp[n-1-i];
        temp[n-1-i] = x;
    }
    
}

int main(){
    int T;
    scanf("%d", &T);
    
    int i;
    for (i = 1; i <= T; i++){
        char str[1001], temp [1001], bfr[1001];
        scanf("%s", str); getchar();
        strcpy(bfr,str);
        strcpy(temp,str);
        reverse(temp,strlen(temp));
        printf("Case #%d : %s\n", i, temp);
    }
    return 0;
}
