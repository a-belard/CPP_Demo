#include <iostream>

using namespace std;

int isComplete(int arr[], int n) {
	int min = INT_MIN;
	int max = INT_MAX;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			if (arr[i] < min) {
				min = arr[i];
			}
			else if (arr[i] > max) {
				max = arr[i];
			}
		}
	}
	if (min < max) {
		for (int x = min + 1; x < max; x++) {
			bool isPresent = false;
			for (int y = 0; y < n; y++) {
				if (arr[y] == x) {
					isPresent = true;
					break;
				}
			}
			if (!isPresent) {
				return 0;
			}
		}
	}
	else {
		return 0;
	}
	return 1;
}

int main() {
	int arr[] = { -5, 6, 2, 3, 2, 4, 5, 11, 8, 7 };
	int n = sizeof(arr) / sizeof(int);
	return 0;
}