#include <stdio.h>
int main(){
	int a;//tv cu
	int b;// cong tac vien
	int c;// cong tac vien roi di
	int tong;// a+b
	int kq;
	printf("nhap tong so thanh vien: ");
	scanf("%d", &tong);
	printf("nhap so thanh vien cu: ");
	scanf("%d", &a);
	printf("nhap so ctv roi di: ");
	scanf("%d", &c);
	kq = (tong = a + b) - a - c;
	printf("so ctv con lai la: %d ", kq);
	return 0;
}
