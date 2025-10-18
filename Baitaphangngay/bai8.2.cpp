#include <stdio.h>
int main(){
	//khai bao gia tri
	int a; //ngay
	int b; // thang
	//nhap gia tri
	printf("nhap ngay thang cua ban: ");
	scanf("%d/%d",&a,&b);
	//xu ly gia tri
	if (b==1){
		printf("cung cua ban la: %s", (a>=20) ? "Bao Binh (Aquarius)" : "Ma Ket (Capricorn)");
		//01
	}else if (b==2){
		printf("cung cua ban la: %s", (a>=19) ? "Song Ngu (Pisces)" : "Bao Bình (Aquarius)");
		//02
	}else if (b==3){
		printf("cung cua ban la: %s", (a>=21) ? "Bach Duong (Aries)" : "Song Ngu (Pisces)");
		//03
	}else if (b==4){
		printf("cung cua ban la: %s", (a>=20) ? "Kim Nguu (Taurus)" : "Bach Duong (Aries)" );
		//04
	}else if (b==5){
		printf("cung cua ban la: %s", (a>=21) ? "Song Tu (Gemini)" : "Kim Nguu (Taurus)" );
		//05
	}else if (b==6){
		printf("cung cua ban la: %s", (a>=21) ? "Cu Giai (Cancer)" : "Song Tu (Gemini)" );
		//06
	}else if (b==7){
		printf("cung cua ban la: %s", (a>=23) ? "Su Tu (Leo)" : "Cu Giai (Cancer)" );
		//07
	}else if (b==8){
		printf("cung cua ban la: %s", (a>=23) ? "Xu Nu (Virgo)" : "Su Tu (Leo)" );
		//08
	}else if (b==9){
		printf("cung cua ban la: %s", (a>=23) ? "Thien Binh (Libra)" : "Xu Nu (Virgo)" );
		//09
	}else if (b==10){
		printf("cung cua ban la: %s", (a>=23) ? "Bo Cap (Scorpio)" : "Thien Binh (Libra)" );
		//10
	}else if (b==11){
		printf("cung cua ban la: %s", (a>=22) ? "Nhan Ma (Sagittarius)" : "Bo Cap (Scorpio)" );
		//11
	}else if (b==12){
		printf("cung cua ban la: %s", (a>=22) ? "Ma Ket (Capricorn)" : "Nhan Ma (Sagittarius)" );
		//12
	}

	return 0;
}
