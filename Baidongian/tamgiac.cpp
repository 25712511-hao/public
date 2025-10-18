#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	printf("nhap vao canh a: ");
	scanf("%f", &a);
	printf("nhap vao canh b: ");
	scanf("%f", &b);
	printf("nhap vao canh c: ");
	scanf("%f", &c);
	if (a + b > c && a + c > b && b + c > a){
		if (a == b && b == c){
			printf("day la tam giac deu");
		}else if ((fabs( pow (a,2) + pow (b,2) - pow(c,2)) < 0.0001) ||
	    		  (fabs( pow (c,2) + pow (b,2) - pow(a,2)) < 0.0001) ||
				  (fabs( pow (c,2) + pow (a,2) - pow(b,2)) < 0.0001)){
			if (a == b || a == c || b == c){
				printf("day la tam giac vuong can");
			}else{
				printf("day la tam giac vuong");
				}
		}else if (a == b || a == c || b == c){
			printf("day la tam giac can");
			}
}else {
       	printf("Day la tam giac thuong\n");
        }
}
