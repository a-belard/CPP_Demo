#include <iostream>
using namespace std;

int main(){
	int array[] = {8,10,6,3,5,8,0};
	int n = sizeof(array)/sizeof(array[0]);
//	for(int i=0; i<n-1; i++){
//		for(int j=0; j<n-i-1; j++){
//			if(array[j]>array[j+1]){
//				int temp = array[j+1];
//				array[j+1] = array[j];
//				array[j] = temp;
//			}
//		}
//	}
	for(int i=1; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(array[j]>array[j+1]){
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
		cout << "The sorted array at every step: \n" << endl;
		for(int k=0; k<n; k++){
		cout << array[k]<< endl;
		cout << "\t" << endl;
		}
	}
	return 0;
}
