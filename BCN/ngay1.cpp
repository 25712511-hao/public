#include <stdio.h>
#include <math.h>
int main (){
	//khai bao
	int a = 18;
	double b = 50.75;
	float c = 8.5; 
	char d = 'A';
	unsigned short e = 160;
	long long f = 25712511;
	unsigned long long g = 18122007;
	char v;
	char ch[] = {'v','i','e','t','t','u','t','s','.','v','n','\0'};
	//in gia tri
	printf("ten cua ban la ",v);
	scanf("%s",&v);	
	printf("\ntuoi cua ban la =%d", a);
	printf("\ncan nang cua ban la =%.2f", b);
	printf("\nso diem cua ban la=%.2f", c);
	printf("\ndiem danh gia la=%c", d);
	printf("\nchieu cao cua ban la=%hum", e);
	printf("\nma so sinh vien cua ban la=%llu",f);
	printf("\nngay sinh cua ban la=%lld",g);
	printf("\nchuoi du lieu = %s ",ch);
	return 0;
}
