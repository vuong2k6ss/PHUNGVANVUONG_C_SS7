#include <stdio.h>

int main()
{
	int num[5] = {1, 2, 3, 4, 5};
	for(int i =0;i<5;i++){
		if(num[i]%2==0){
			num[i] += 3;
		}else{
			num[i] += 2;
		}	
	}
	printf("cac phan tu trong mang sau khi thay doi : %d %d %d %d %d ", num[0],num[1],num[2],num[3],num[4]);
	return 0;
}

