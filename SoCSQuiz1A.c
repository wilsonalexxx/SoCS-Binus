#include <stdio.h>
#include <stdlib.h>

int hitung(int a, int b){
    
    int keep = 0;
    int kelipatan = 1;
    int hasil = 0;
    
    while( a > 0 || b > 0 ){
        hasil = (a % 10) + (b % 10);
        hasil %= 10;
        keep = (hasil * kelipatan) + keep;
        a/=10;
        b/=10;
        kelipatan *=10;
    }
    return keep;
}

int main(){
    int cs, T;
    scanf("%d", &T);
    
    for (cs=1; cs<=T; cs++){
        
        int A, B;
        scanf("%d %d", &A, &B);
        
        printf("Case #%d: %d\n", cs, hitung(A,B));
       
    }
 return 0;
}
