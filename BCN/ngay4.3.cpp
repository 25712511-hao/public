#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int sum = 0;
	printf("nhap so: ");
	scanf("%d", &a);
	while (a != 0){
		int c = a%10;
		sum += c;
		a/=10;
	}
	printf("%d", sum);
	return 0;
}
