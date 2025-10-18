#include <stdio.h>
int main(){
	//khai bao bien
	int a;
	int b;
	int c;
	int d;
	//nhap gia tri
	printf("nhap gia tri tuong ung gio, phut, giay, so giay: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//xu ly gia tri
	int e = a*3600 + b*60 + c + d;
	e = e % (24 *3600);
	a = e / 3600;
	e = e % 3600;
	b = e / 60;
	c = e % 60;
    //xuat gia tri
	printf("gia tri gio, phut, giay la: %.2d:%.2d:%.2d",a ,b, c);
	return 0;
}
