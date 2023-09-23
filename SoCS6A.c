#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, T, x, n;

    scanf("%d", &T);
    
    for (a=1; a<=T; a++){
        
        scanf("%d", &n);
        long int b[n];
        long int c[n];
        for (x=0; x<n; x++){
            scanf("%ld", &b[x]);
        }    
        
        for (x=0; x<n; x++){
            scanf("%ld", &c[x]);
        }
        
        printf("Case #%d: ", a);
        
        for (x=0; x<n; x++){
            if (x == n-1){
                printf("%ld\n", b[x]-c[x]);
            }
            else {
                printf("%ld ", b[x]-c[x]);
            }
        }
    
    }

 return 0;
}
