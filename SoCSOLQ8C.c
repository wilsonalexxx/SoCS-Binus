#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		char S[100001];
		scanf("%s", S);
		int i, count = 0;
		int x = strlen(S);
		int y[27] = {0};
		
		for(i = 0; i < x; i++){
			int keep = S[i] -= 96;
			y[keep]++;
		}
		
		for(i = 0;i <= 26; i++){
			if(y[i] > 0){
				count++;
			}
		}
		if(count % 2 == 0){
			printf("Case #%d: Breakable\n", cs);
		}else{
			printf("Case #%d: Unbreakable\n", cs);
		}
		cs++;
	}
	return 0;
}
