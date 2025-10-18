#include <stdio.h>
int main(){
	//khai bao gia tri
	int a; //ngay
	int b; // thang
	//nhap gia tri
	printf("nhap ngay thang cua ban: ");
	scanf("%d/%d",&a,&b);
	//xu ly gia tri
	if (a>=20 && b==1 || a<=18 && b==2){
		printf("cung cua ban la: Bao Binh (Aquarius)");
		//01&&02
	}else if (a>=19 && b==2 || a<=20 && b==3){
		printf("cung cua ban la: Song Ngu (Pisces)");
		//02&&03
	}else if (a>=21 && b==3 || a<=19 && b==4){
		printf("cung cua ban la: Bach Duong (Aries)");
		//03&&04
	}else if (a>=20 && b==4 || a<=20 && b==5){
		printf("cung cua ban la: Kim Nguu (Taurus)");
		//04&&05
	}else if (a>=21 && b==5 || a<=20 && b==6){
		printf("cung cua ban la: Song Tu (Gemini)");
		//05&&06
	}else if (a>=21 && b==6 || a<=22 && b==7){
		printf("cung cua ban la: Cu Giai (Cancer)");
		//06&&07
	}else if (a>=23 && b==7 || a<=22 && b==8){
		printf("cung cua ban la: Su Tu (Leo)");
		//07&&08
	}else if (a>=23 && b==8 || a<=22 && b==9){
		printf("cung cua ban la: Xu Nu (Virgo)");
		//08&&09
	}else if (a>=23 && b==9 || a<=22 && b==10){
		printf("cung cua ban la: Thien Binh (Libra)");
		//09&&10
	}else if (a>=23 && b==10 || a<=21 && b==11){
		printf("cung cua ban la: Bo Cap (Scorpio)");
		//10&&11
	}else if (a>=22 && b==11 || a<=21 && b==12){
		printf("cung cua ban la: Nhan Ma (Sagittarius)");
		//11&&12
	}else if (a>=22 && b==12 || a<=19 && b==1){
		printf("cung cua ban la: Ma Ket (Capricorn)");
		//12&&01
	}

	return 0;
}
