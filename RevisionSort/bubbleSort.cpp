#include <iostream>
using namespace std;
int main(){
	int array[6] = {20, -9, 5, 7, 1, 0};
	int size = sizeof(array)/sizeof(array[0]);
	for(int i=1; i<size; i++){
		for(int j=0; j<size-i; j++){
			if(array[j]>array[j+1]){
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
	for(int x: array){
		cout << x << endl;
	}
}
