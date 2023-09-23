#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    char name[45];
    char tree[45];
    //char fren[45];
}list[101];

int N, T, in;
char key[45];

int search(char[]);

int main(){
    
    FILE *fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%d\n", &N); 
    int i;
    for (i=0; i<N; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", list[N].name, list[N].tree);
        //printf("[%d] %s : %s\n", i, list[N].name, list[N].tree);    
    }
    
    fscanf(fp, "%d\n", &T);
    int j;
    for (j=0; j<T; j++){
        fscanf(fp, "%s\n", key);
        printf("Checking: %s -> at ", key);
        
        in = search(key);
        printf("%d\n", in);
        
        printf("Case #%d: ", j+1);
        if(in != -1){
            //printf("Data Found!\n");
            printf("%s\n", list[in].tree);
        }
        else {
            printf("N/A\n");
        }
    }
    
    fclose(fp);

 return 0;
}

int search(char key[]){
    in=0;
    int i;
    for (i=0; i<N; i++){
        if(strcmp(list[i].name, key) > 0){
            in = i;
            return in;
        }
        else {
            return -1;
        }
    }
}
