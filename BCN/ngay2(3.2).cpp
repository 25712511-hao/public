#include <stdio.h>
int main(){
	int a;
	printf("nhap diem cua ban: ");
	scanf("%d", &a);
	switch (a){
		case 1:
			printf("diem cua ban la: mot diem");
			break;
		case 2:
			printf("diem cua ban la: hai diem");
			break;
		case 3:
			printf("diem cua ban la: ba diem");
			break;
		case 4:
			printf("diem cua ban la: bon diem");
			break;
		case 5:
			printf("diem cua ban la: nam diem");
			break;
		case 6:
			printf("diem cua ban la: sau diem");
			break;
		case 7:
			printf("diem cua ban la: bay diem");
			break;
		case 8:
			printf("diem cua ban la: tam diem");
			break;
		case 9:
			printf("diem cua ban la: chin diem");
			break;
		case 10:
			printf("diem cua ban la: muoi diem");
			break;
		default:
			printf("du lieu khong hop le");
	}
	return 0;
}
