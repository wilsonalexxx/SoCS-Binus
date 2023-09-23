#include <stdio.h>

struct kelas{
	char code[9];
	char hari[10];
	int time;
};

int main(){
	int n;
	scanf("%d", &n);
	struct kelas F[n];
	
	int i,j;
	for(i = 0; i < n; i++){
		scanf("%s", F[i].code);
		scanf("%s", F[i].hari);
		scanf("%d", &F[i].time);
	}
	
	int T;
	scanf("%d", &T);
	for(j = 1; j <= T; j++){
		int x;
		scanf("%d", &x);
		if(F[x-1].time >= 7 && F[x-1].time <= 19){
			printf("Query #%d:\n", j);
			printf("Code: %s\n", F[x-1].code);
			printf("Day: %s\n", F[x-1].hari);
			if(F[x-1].time >= 10 && F[x-1].time <= 19){
				printf("Time: %d:00\n", F[x-1].time);
			}else if(F[x-1].time >= 7 && F[x-1].time < 10){
				printf("Time: 0%d:00\n", F[x-1].time);
			}
		}
	}
	return 0;
}
