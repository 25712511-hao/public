#include <stdio.h>
#include <math.h>
int main(){
	//khai bao bien
	double a;
	double R=3.14;
	printf("nhap gia tri cua r:");
	scanf(" %lf",&a);
	double c = 2*R*a;
	printf("chu vi duong tron la:%.2lf", c);
	return 0;
}
