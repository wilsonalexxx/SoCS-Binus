#include <stdio.h>
#include <string.h>

long long int bs(long long int num){
    long long int beg = 1, end = 1500000;
    long long int mid, x;
    
    while(beg <= end){
        mid = (beg + end) / 2;
        if(mid*(mid+1)*(2*mid+1)/6 == num){
            x = mid;
            break;
        }
        else if(mid*(mid+1)*(2*mid+1)/6 < num){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
            x = mid;
        }
    }
    return x;
}

int main(){
    int cs;
    long long int M;
    
    scanf("%d", &cs);
    
    for(int i = 1; i <= cs; i++){
        scanf("%lld", &M);
        printf("Case #%d: %lld\n",  i, bs(M));
    }
    return 0;
}
