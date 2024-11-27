#include <stdio.h>

int main()
{
	int num[] = {4,5,6};
	printf("do dai mang la %d\n", sizeof(num)/sizeof(int));
	for(int i = 0;i<sizeof(num)/sizeof(int);i++){
		printf("num[%d] = %d\n", i, num[i]);
	}
	return 0;
}

