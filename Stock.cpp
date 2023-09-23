#include <stdio.h>
#include <string.h>

struct sort{
    char barang[51];
    int jumlah;
};

int search(char cari[], int item, struct sort barang[]) {
    int hasil = -1;
    for(int i = 0; i < item; i++){
        if(strcmp(cari, barang[i].barang) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int T, N;
    fscanf(fp, "%d\n", &T);
    
    for(int i = 0; i < T; i++){
        fscanf(fp, "%d\n", &N);
        struct sort temp;
        struct sort item[N];
        int total = 0;
        char X[100];
        for(int j = 0; j < N; j++){
            fscanf(fp, "%[^#]#%[^#]#%d\n", X, temp.barang, &temp.jumlah);
            int result = search(temp.barang, total, item);
            if(result == -1){ //item not found
                strcpy(item[total].barang, temp.barang);
                if(strcmp(X, "sell") == 0){
                    item[total].jumlah = -temp.jumlah;
                } else if(strcmp(X, "buy") == 0){
                    item[total].jumlah = temp.jumlah;
                }
                total++;
            } else if(result != -1){ // item found
                if(strcmp(X, "sell") == 0){
                    item[result].jumlah -= temp.jumlah;
                } else if(strcmp(X, "buy") == 0){
                    item[result].jumlah += temp.jumlah;
                }
            }
        }

        printf("Case #%d:\n", i+1);

        int tanda = 0;
        for(int j = 0; j < total; j++){
            if(item[j].jumlah < 0){
                printf("stock is not enough for product %s\n", item[j].barang);
                tanda = 1;
            }
        }
        if(!tanda){
            for(int j = 0; j < total; j++){
                printf("%s - %d\n", item[j].barang, item[j].jumlah);
            }
        }
    }
    return 0;
}
