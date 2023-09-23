#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int a, b, c, sum;
		scanf("%d %d %d", &a, &b, &c);
		sum = a * b / 100;
		if(sum > c){
			printf("Case #%d: %d\n", cs, c);
		}else{
			printf("Case #%d: %d\n", cs, sum);
		}
		cs++;
	}
	return 0;
}
