#include <stdio.h>

struct sort{
	char panjang[1010];
	char nama[1010];
	long long int view;
}data[100], temp;

int main(){
	FILE *fr = fopen("testdata.in", "r");
	int z = 0;
	while(!feof(fr)){
		fscanf(fr, "%[^#]#%[^%#]#%lld\n", &data[z].panjang, &data[z].nama, &data[z].view);
		z++;
	}
	fclose(fr);
	
	int a, b;
        for (a=0; a<z-1; a++){
            for(b=0; b<z-1-a; b++){
                if (strcmp(data[b].panjang, data[b+1].panjang) > 0){
                    temp = data[b];
                    data[b] = data[b+1];
                    data[b+1] = temp;
                }
            }
        }
        
    int x, y;
	for(x = 0; x < z-1; x++){
		for(y = 0 ; y < z-1-x; y++){
			if(data[y].view < data[y + 1].view){
				temp = data[y];
				data[y] = data[y+1];
				data[y + 1] = temp;
			}
		}
	}
	
	int i;
	for(i = 0; i < z; i++){
			printf("%s by %s - %lld\n", data[i].panjang, data[i].nama, data[i].view);
	}
}
