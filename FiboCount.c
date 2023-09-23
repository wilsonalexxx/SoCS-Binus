#include <stdio.h>
#include <stdlib.h>

int count = 0;

int hitung(int a){
	count++;
	
	if(a == 0 || a == 1){
		return a;
	}else{
		return (hitung(a-1) + hitung(a-2));
	}
}

int main(){
	int T, cs = 1;
	scanf("%d", &T);
	
	while(T--){
		int n;
		scanf("%d", &n);
		
		hitung(n);
		printf("Case #%d: %d\n", cs, count);
		count = 0;
		cs++;
	}
	return 0;
}
