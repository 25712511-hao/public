#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int b = 1;
	printf("nhap so de dem: ");
	scanf("%d", &a);
	a /= 10;
	while (a != 0){
		b++;
		a/=10;
	}
	printf("%d",b);
	return 0;
}
