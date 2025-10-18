#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	char c;
	float kq = 0;
	printf("nhap 2 so tu ban phim: ");
	scanf("%d %d", &a, &b);
	printf("nhap phep tinh: ");
	scanf(" %c", &c);
	if (c == '+'){
		kq = a + b;
		printf("ket qua cua a+b la: %.2f", kq);
	}else if (c == '-'){
		kq = a - b;
		printf("ket qua cua a-b la: %.2f", kq);
	}else if (c == '*'){
		kq = a * b;
		printf("ket qua cua a*b la: %.2f", kq);
	}else if (c == '-'){
		kq = a / b;
		printf("ket qua cua a/b la: %.2f", kq);
	}else if (c == '%'){
		kq = a % b;
		printf("ket qua cua a chia b du la: %.2f", kq);
	}else {
		printf("ky tu nhap khong hop le");
	}
	return 0;
}
