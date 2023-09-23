#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T, i, j = 0;
	char a[1000];
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		scanf("%s", a); getchar();
		printf("Case %d: ", i);
		
		while(a[j]){
			printf("%d", a[j++]);
			if(j < strlen (a)){
				printf("-");
			}else{
			}
			}
		j = 0;
		printf("\n");
	}
	return 0;
}
