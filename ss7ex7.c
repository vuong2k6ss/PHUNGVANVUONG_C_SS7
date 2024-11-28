#include <stdio.h>

int main(){
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int num[n];
    for (int i=0;i<n;i++){
        int soLe;
        while(1){
        	printf("nhap phan tu thu %d: ",i+1);
            scanf("%d",&soLe);
            if(soLe%2!=0){
                num[i] = soLe;
                break; 
            }else{
                printf("khong hop le!!!nhap lai: ");
            }
        }
    }
    printf("Cac phan tu trong mang: \n");
    for (int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

