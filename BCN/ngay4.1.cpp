#include <stdio.h>
#include <math.h>
int main(){
	int a , sum, sl = 0 ;
	printf("nhap so lan lap: ");
	scanf("%d", &a);
	for (int i = 1; i <= a;i++){
		if (a % i == 0){
		sl++;
	}
		printf("%d\n", i);
	}
printf("%d ", sl);
	return 0;
}
