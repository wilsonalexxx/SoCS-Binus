#include <stdio.h>

int main(){
	long int a, b, c, d;
	long int kali, kurang;

	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	
	kali = a * b;
	kurang = c - d;
	
	if(kali == kurang){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return 0;
}
