#include <stdio.h>
#include <string.h>

int bs(int arr[], int l, int r, int pos){
    int index = -1;
    
    while ( l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] == pos){
            index = mid;
            r = mid-1;
        }
        else if (arr[mid] < pos){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return index == -1 ? -1 : index+1;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    
    int arr[N], Q;
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < M; i++){
        scanf("%d", &Q);
        printf("%d\n", bs(arr, 0, N-1, Q));
    }
    return 0;
}
