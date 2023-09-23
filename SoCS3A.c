#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int X, Y, T, d;
	int a[3][3];
	scanf("%d %d", &X, &Y);
	
	int i;
	int j;
	for(i = 0;i < X; ++i){
		for(j = 0;j < Y;j++){
			scanf("%d ", &a[3][3]);
		}
	}d = sizeof (a);
	printf("%d", d);
}
