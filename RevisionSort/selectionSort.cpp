#include <iostream>
using namespace std;
int main(){
	int arr[] = {20, 7, 12, 4, 2, -1};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size-1; i++){
		int min_index = i;
		for(int j=i+1; j<size; j++){
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		if(arr[min_index]!=arr[i]){
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
	for(int x: arr){
		cout << x << endl;
	}
	
}
