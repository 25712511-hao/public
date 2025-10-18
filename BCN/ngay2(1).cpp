#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	printf("nhap 2 so tu ban phim: ");
	scanf("%d %d", &a, &b);
	if (a > b){
		printf("so %d lon hon %d", a, b);
	}else if (a < b){
		printf("so %d lon hon %d", b, a);
	}else {
		printf(" 2 so bang nhau");
	}
	return 0;
}
