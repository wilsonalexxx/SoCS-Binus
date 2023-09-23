#include<stdio.h>
#include<string.h>

int T, N, count = 0;
int i, j, k;
char X[101][101], Y[101][101];
char arr[100001], arr2[101];

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);

    for (i=0; i<T; i++)
    {
        fscanf(fp, "%[^#]#%[^\n]\n", X[i], Y[i]);
    }

    fscanf(fp, "%d\n", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Case #%d:\n", i+1);
        strcpy(arr, "");
        fscanf(fp, "%[^\n]\n", arr);
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == ' ')
            {
                for (int k = 0; k < T; k++)
                {
                    if (strcmp(X[k], arr2) == 0)
                    {
                        printf("%s ", Y[k]);
                        memset(arr2,0,strlen(arr2));
                        count = 0;
                        break;
                    }
                    else if(k == T-1) {
                        printf("%s ", arr2);
                        memset(arr2,0,strlen(arr2));
                        count = 0;
                        break;
                    }
                }
            }
            else {
                arr2[count] = arr[j];
                count++;  
            }
        }
        for (int k = 0; k < T; k++)
        {
            if (strcmp(X[k], arr2) == 0)
            {
                printf("%s\n", Y[k]);
                memset(arr2,0,strlen(arr2));
                count = 0;
                break;
            }
            else if(k == T-1) {
                printf("%s\n", arr2);
                memset(arr2,0,strlen(arr2));
                count = 0;
                break;
            }
        }
    }
    return 0;
}
