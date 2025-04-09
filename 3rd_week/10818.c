#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_min(int arr[],int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int get_max(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int N;
	scanf("%d", &N);

	int arr[1000000];

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int min = get_min(arr, N);
	int max = get_max(arr, N);

	printf("%d %d\n", min, max);
	return 0;
}
