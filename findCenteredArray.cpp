#include <iostream>
using namespace std;
findCenteredArray(int *arr, int size){
		if(size < 3){
			return 0;
		}
		if(size%2!=0){
			int middleIndex = (size-1)/2;
			for(int i=0; i<size/2; i++){
				if(arr[i] <= arr[middleIndex] || arr[i+middleIndex+1] <= arr[middleIndex]){
					return 0;
					cout << "This array is centered. " << endl;
				}
			}
			return 1;
			cout << "This array is not centered. " << endl;
		}
		return 0;
	}
int main(){
	int arr [] = {26, 20, 23, 10, 19, 14, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << findCenteredArray(arr, size);
	return 0;
}
