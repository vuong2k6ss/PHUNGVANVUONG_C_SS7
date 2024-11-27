#include <stdio.h>
int main()
{
	int n;
	printf("nhap vao so luong phan tu :");
	scanf("%d", &n);
	int num[n];
	for(int i = 0;i<sizeof(num)/sizeof(num[0]);i++){
		printf("nhap so thu %d : ", i+1);
		scanf("%d", &num[i]);
	}
	printf("cac phan tu trong mang la :\n");
	for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++){
		printf("num[%d]=%d\n",i,num[i]);
	}
	return 0;
}


