#include <stdio.h>

int main() {
	int N,k;
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++) {
		k = N * i;
		printf("%d * %d = %d\n", N, i, k);
	}
	return 0;
	
}
