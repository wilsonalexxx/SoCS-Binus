#include <stdio.h>
#include <string.h>

struct sort{
	char nama[41];
	char tree[41];
}data[101];

char key[41];
int N, T, in;

int binary_search(char[]);

int main(){
	FILE *fr = fopen("testdata.in", "r");
	fscanf(fr, "%d", &N);
	int i;
	for(i = 0; i < N; i++){
		fscanf(fr, "%[^#]#%[\n]\n", data[i].nama, data[i].tree);
	}
	
	int j;
	for(j = 0; j < T; j++){
		fscanf(fr, "%s", key);
		
		in = binary_search(key);
		printf("Case #%d: ", j+1);
		if(in != -1){
			printf("%s\n", data[in].tree);
		}else{
			printf("N/A\n");
		}
	}
	return 0;
}

int binary_search(char key[]){
	int mid = 0;
	int left = 0;
	int right = N-1;
	
	while(left <= right){
		mid = (left + right)/2;
		if(strcmp(data[mid].nama, key) > 0){
			right = mid - 1;
		}else if(strcmp(data[mid].nama, key) < 0){
			left = mid + 1;
		}else{
			return mid;
		}
	}
	return -1;
}
