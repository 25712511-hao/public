#include <stdio.h>
#include <math.h>
int main(){
	int a , sum = 0;
	printf("nhap so lan lap: ");
	scanf("%d", &a);
	for (int i = 1; i <= a;i++){
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
