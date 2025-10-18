#include<stdio.h>

int main() {
    int a[10];
    int sum;
    for (int i = 0; i < 10; i++){
    scanf("%d ", &a[i]);
	}
    for (int i = 0; i < 10; i++){    
	sum += a[i];
    }
    printf("ket qua: %d", sum);
    return 0;
}

