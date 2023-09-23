#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct siswa{
	char nama[11];
	char nilai[1001];
}data[1001], temp;

int main(){
	int T;
	scanf("%d", &T);
	
	for(int cs = 1; cs <= T; cs++){
		int N;
		scanf("%d", &N);
		
		int x;
		
		for(int i = 0;i < N; i++){
			scanf("%[^#]#", data[i].nama);getchar();
			scanf("%d", &data[i].nilai);
		}

		
//		for(int i = 0;i < N; i++){
//			for(int j = 0; j < 11; j++){
//				data[i].nama[j] = toupper(data[i].nama[j]);
//			}
//		}
		
        for(int a=0; a<N-1; a++){
            for(int b=0; b<N-1-a; b++){
                if (strcmp(data[b].nama, data[b+1].nama) > 0){
                    temp = data[b];
                    data[b] = data[b+1];
                    data[b+1] = temp;
                }
            }
        }
		
        for (int i=0; i<N-1; i++){
            for(int j=0; j<N-1-i; j++){
                if (data[j].nilai < data[j+1].nilai){
                    temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
		
		char search[11];
		scanf("%s", search);getchar();
		
//		for(int j = 0; j < strlen(search); j++){
//			search[j] = toupper(search[j]);
//		}
		
		printf("Case #%d: ", cs);
		
		for(int i = 0; i < N; i++){
			if(strcmp(data[i].nama, search) == 0){
					printf("%d\n", i+1);
			}
			
		}
	}
	return 0;
}
