#include <stdio.h>
int main(){
	float f2;
	float f1;
	float c2;
//	int sum = 0;
	printf("Celsius Fahrenheit     Fahrenheit Celsius\n");
	for (int c = 0; c >= 0 && c <= 10; c++){
		f1 = (c * 9 / 5) + 32;
		f2 = 32 + c;
		c2 = (f2 - 32) * 5 / 9;
printf("%6.2f %10.2f %10.0f %10.2f\n", c, f1, f2, c2);
}
}
