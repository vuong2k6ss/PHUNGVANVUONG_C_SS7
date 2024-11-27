#include <stdio.h>
int main()
{
	int num[5];
	for(int i = 0;i<5;i++){
		printf("nhap so thu %d : ", i+1);
		scanf("%d", &num[i]);
	}
	printf("cac phan tu trong mang la :\n");
	for(int i = 0; i < 5; i++){
		printf("num[%d]=%d\n",i,num[i]);
	}
	return 0;
}

