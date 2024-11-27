#include <stdio.h>

int main()
{
	int num[5] = {8, 5, 7, 4, 10};
	int max = num[0], min = num[0];
	for(int i = 0; i < 5;i++){
		if(num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
	}
	printf("so lon nhat trong mang la: %d\n", max);
	printf("so nho nhat trong mang la: %d", min);
	return 0;
}

