#include <stdio.h>
int main(){
	//khai bao bien
	int a;
	int c;
	printf("nhap gia tri n:");
	scanf("%d", &a);
	//xu ly lenh while
	int i;
	while(i<=a){
		c = c+i;
		i++;
	}
	printf("gia tri da tinh la:%d", c);
	return 0;
}
