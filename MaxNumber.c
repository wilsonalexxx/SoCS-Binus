#include <stdio.h>

void sort(long int *a,int b){
    for(int i=1; i<b; i++){
        int temp = a[i];
        for(int j=i-1; j>=0 && temp< a[j]; j--){
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}

int main(){
    int N,M;
    long int a[1000];
    long int b[1000];
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<M; i++){
        scanf("%ld", &b[i]);
    }

    for(int i=0; i<M; i++){        
        for(int j=0; j<N; j++){
            if(b[i] == a[j]){
            a[j]=0;
            }
        }
    }
    long int max = 0;
    for(int i=0; i<N ; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    if(max == 0){
        max = -1;
    }
    printf("Maximum number is %ld\n",max);
    
    return 0;
}
