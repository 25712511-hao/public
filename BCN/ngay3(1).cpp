#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("nhap ba canh tam giac: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c){
		printf("day la mot tam giac");
	}else if (a +c > b) {
		printf("day la mot tam giac");
	}else if ( b + c > a){
		printf("day la mot tam giac");
	}else {
		printf("day khong phai la tam giac");
	}
	return 0;
}
