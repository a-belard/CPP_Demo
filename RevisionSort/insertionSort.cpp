#include <iostream>
using namespace std;
int main(){
	int arr[] = {20, 7, 12, 4, 2, -1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key, p;
	for(int i=0; i<size; i++){
		key = arr[i];
		p = i-1;
	for(; p>=0 && arr[p]>key; p--){
		arr[p+1] = arr[p];
	}
	arr[p+1] = key;
	}
	for(int k=0; k<size; k++){
		cout << arr[k] <<endl;
	}
}
