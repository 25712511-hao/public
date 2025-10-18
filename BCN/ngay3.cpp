#include <stdio.h>
int main(){
	int a;
	printf("nhap vao so bat ki: ");
	scanf("%d", &a);
	(a / 2 == 0) ? printf("%d day la so chan", a) : printf("%d day la so le", a);
}
