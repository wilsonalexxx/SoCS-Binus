#include <stdio.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	long long int F[n];
	int i;
	long long int x = 0;
	for (i = 0; i < n; i++){
		scanf("%lld", &F[i]);
		if(F[i] >= 0){
		 x = x + F[i];
		}
	}
	printf("%lld\n", x);
}
