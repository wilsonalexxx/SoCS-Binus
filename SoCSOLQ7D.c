#include <stdio.h>

int main(){
	int n, m;
	int i;
	scanf("%d %d", &n, &m);
	char kata[n];
	scanf("%s", kata);
	
	for(i = 0; i < m; i++){
		int x;
		scanf("%d", &x);
		if(kata[x] == toupper(kata[x])){
			kata[x] = tolower(kata[x]);
		}else if(kata[x] == tolower(kata[x])){
			kata[x] = toupper(kata[x]);
		}
	}
	printf("%s\n", kata);
}
