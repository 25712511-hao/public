#include <stdio.h>
int main(){
	char a;
	printf("nhap ky tu: ");
	scanf("%c", &a);
	if (a >= 65 && a <= 90){
		a += 32;
		printf("%c chu cai thuong\n", a);
	}else if (a >= 97 && a <= 122){
		a -= 32;
		printf("%c chu cai hoa\n", a);
	}else if (a >= 48 && a <= 57){
		printf("%d chu so", a);
	}else {
		printf("ky tu nhap khong hop le");
	}
	return 0;
}
