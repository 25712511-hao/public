#include <stdio.h>
int main(){
	char abs[3];
	for (int i = 0; i < 3; i++){
		printf("nhap ki tu thu %d trong ten cua ban: ", i+1);
		scanf(" %c", &abs[i]);		
	}
	printf("ten cua ban la:");
	for (int i = 0; i < 3; i++){
		printf("%c", abs[i]);
	}
	return 0;
}
