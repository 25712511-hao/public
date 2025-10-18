#include <stdio.h>
int main(){
	int a[5];
	int sum = 0;int i = 0;
	while ( i < 5){
		printf("nhap phan tu %d: ", i+1);
		i++;
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
		printf("tong mang la: %d", sum);
	return 0;
}
