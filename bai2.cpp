#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int sum = 0;
	for (int i = 100; i <= 999; i++){
		s1 = i % 10;
		s2 = (i / 10) % 10;
		s3 = i / 100;
		sum = s1 * s1 * s1 + s2 * s2 * s2 + s3 * s3 * s3;
		if (sum == i){
			printf("Armstrong co 3 chu so: %d\n", i);
		}
	}
}
