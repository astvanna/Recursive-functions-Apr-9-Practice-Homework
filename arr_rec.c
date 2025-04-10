#include <stdio.h>

void print_arr(int arr[], int size, int ind) {
	if (ind >= size) {
		return;
	}
	printf("%d ", arr[ind]);
	print_arr(arr, size, ind + 1);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, size, 0);
	printf("\n");
	return 0;
}
