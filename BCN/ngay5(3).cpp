#include <stdio.h>
int main(){
	char abs[20];
	char b[20];
	for (int i = 0; i < 9; i++){
		printf("nhap ki tu thu %d trong ho cua ban:", i+1);
		scanf(" %c", &abs[i]);		
	}
	for (int i = 0; i  < 9; i++){
		b[i] = abs[8 - i];
	}
	printf("ho ten nguoc cua ban la:");
	for (int i = 0; i < 20; i++){
		printf("%c", b[i]);
	}
	return 0;
}
