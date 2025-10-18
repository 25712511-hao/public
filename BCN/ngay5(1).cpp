#include <stdio.h>
int main(){
	int abs[5];
	int sum = 0;
	for (int i = 0; i < 5; i++){
		printf("nhap phan tu %d: ", i+1);
		scanf("%d", &abs[i]);	
		if (abs[i] % 2 == 0 ){
			sum = sum + abs[i];
		}
	//	sum += (abs[i] % 2 == 0) ? abs[i] : 0;
	}
		printf("tong mang la: %d", sum);
	return 0;
}
