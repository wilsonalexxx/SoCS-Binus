#include <stdio.h>
#include <string.h>

int main(){
	int T, n, m = 1;
	int i;
	scanf("%d", &T);
	
	while(T--){
		scanf("%d", &n);
		int F[n];
		int Flist[200001]; memset(Flist, 0, sizeof(Flist));
		int Fout[200001]; memset(Fout, 0, sizeof(Fout));
		for(i = 0; i < n; i++){
			scanf("%d", &F[i]);
			Flist[F[i]]++;
		}
		int max = 0;
		for(i = 0; i <= 200000; i++){
			if(Flist[i] > max){
				max = Flist[i];
			}
		}
		int count = 0;
		for(i = 0; i <= 200000; i++){
			if(Flist[i] == max){
				Fout[count] = i;
				count++;
			}
		}
		printf("Case #%d: %d\n", m, max);
		m++;
		for(i = 0; i < count-1; i++){
			printf("%d ", Fout[i]);
		}
		printf("%d\n", Fout[count-1]);
	}
	return 0;
}
