#include <stdio.h>

struct temperature{
	char nama[1001];
	double tempe;
	char met;
}data[100], temp;

int main(){
	
	FILE *fr = fopen("testdata.in", "r");
	
	int z = 0;
	while(!feof(fr)){
		fscanf(fr, "%[^#]#%lf#%[^\n]\n", &data[z].nama, &data[z].tempe, &data[z].met);
//		printf("%s is %.2f%c", data[z].nama, data[z].tempe, data[z].met);
		z++;
	}
	fclose(fr);
	
	int j;
	for(j = 0; j < z; j++){
		if(data[j].met == 'F'){
			data[j].tempe = (data[j].tempe - 32)*5/9;
		}
	}
	
	int a, b;
        for (a=0; a<z-1; a++){
            for(b=0; b<z-1-a; b++){
                if (strcmp(data[b].nama, data[b+1].nama) > 0){
                    temp = data[b];
                    data[b] = data[b+1];
                    data[b+1] = temp;
                }
            }
        }
	
	int x, y;
	for(x = 0; x < z-1; x++){
		for(y = 0 ; y < z-1-x; y++){
			if(data[y].tempe > data[y + 1].tempe){
				temp = data[y];
				data[y] = data[y+1];
				data[y + 1] = temp;
			}
		}
	}
	
	for(j = 0; j < z; j++){
		if(data[j].met == 'F'){
			data[j].tempe = (data[j].tempe * 9 / 5) + 32;
		}
	}
	
	int i;
	for(i = 0; i < z; i++){
			printf("%s is %.2lf%c\n", data[i].nama, data[i].tempe, data[i].met);
	}
	return 0;
}
