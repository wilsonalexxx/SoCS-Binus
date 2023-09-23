#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sort{
    char nama[41];
    int angka;
}data[1000], temp;

int main(){
    
    FILE *fr = fopen("testdata.in", "r");
//    if (fr == NULL){
//        printf("File not found!\n");
//    }else{
		int T;
    	fscanf(fr, "%d", &T);
		
        int n;
        for (n=0; n<T; n++){
            fscanf(fr, "%d#%[^\n]", &data[n].angka, data[n].nama);
        }
//   	}
 	fclose(fr);
   
//   	FILE *fw = fopen("testdata.in", "w+");
//   	if (fw == NULL){
//        printf("File not found!\n");
//    }else{
        int a, b;
        for (a=0; a<T-1; a++){
            for(b=0; b<T-1-a; b++){
                if (strcmp(data[b].nama, data[b+1].nama) > 0){
                    temp = data[b];
                    data[b] = data[b+1];
                    data[b+1] = temp;
                }
            }
//            fprintf(fw, "%d#%[\n]", data[a].angka, data[a].nama);
        }
//    }
//    fclose(fw);
        
    int x;
    for (x=0; x<T; x++){
        printf("%d %s\n", data[x].angka, data[x].nama);
    }

 	return 0;
}
