#include <stdio.h>

int main(){
    int x, y;
    printf("nhap so hang: ");
    scanf("%d",&x);
    printf("nhap so cot: ");
    scanf("%d",&y);
    int num[x][y];  
    printf("nhap cac phan tu cho mang\n");
    for(int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            printf("nhap phan tu tai num[%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("mang 2 chieu cua ban:\n");
    for(int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            printf("%d ", num[i][j]);
        }
        //printf("\n"); 
    }
    return 0;
}

