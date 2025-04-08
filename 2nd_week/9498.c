#include <stdio.h>

int main() {
	int S;
	scanf("%d", &S);

	if (S >= 90) {
		printf("A");
	}
	else if (S >= 80) {
		printf("B");
	}
	else if (S >= 70) {
		printf("C");
	}
	else if (S >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	return 0;

}
