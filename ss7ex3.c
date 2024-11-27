#include <stdio.h>

int main()
{
	int num[] = {2, 3, 8, 7, 9};
	int count = 1;
	for(int i=0; i<sizeof(num)/sizeof(num[0]);i++){
		if(num[i]%2==0){
			count++;
			printf("so chan trong mang la %d\n ", num[i]);	
		}
	}
	if(count==1){
		printf("trong mang kh co so chan!!!");
	}
	return 0;
}

