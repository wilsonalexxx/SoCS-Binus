#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int cs = 1;
	
	while(T--){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if((x + y) > z){
			if((x + z) > y){
				if((y + z) > x){
					printf("Case #%d: Yes\n", cs);
				}else{
					printf("Case #%d: No\n", cs);
				}
			}else{
				printf("Case #%d: No\n", cs);
			}
		}else{
			printf("Case #%d: No\n", cs);
		}
		cs++;
	}
	return 0;
}
