#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		char S[10001];
		scanf("%s", S);
		
		int i, j;
		for(i = 0;i < strlen(S); i++){
			if(S[i] == toupper(S[i])){
				S[i] = tolower(S[i]);
			}else if(S[i] == tolower(S[i])){
				S[i] = toupper(S[i]);
			}
		}
		int a = 0;
		int b = strlen(S) - 1;
		char keep;
		
		while(a < b){
			keep = S[b];
			S[b] = S[a];
			S[a] = keep;
			a++;
			b--;
		}
		printf("Case #%d: %s\n", cs, S);
		cs++;
	}
}
