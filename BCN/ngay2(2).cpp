#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("nhap 3 so tu ban phim de tim so nho nhat: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a <= b || a >= b ) && b>c && a>c){
		printf(" so nho nhat la: %d", c);
	}else if (a > b && b < c && (a <= c || a >= c)){
		printf(" so nho nhat la: %d", b);
	}else if (a < b && (b <= c || b >= c) && a < c){
		printf(" so nho nhat la: %d", a);
	}
	return 0;
}
