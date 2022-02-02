#include <iostream>
using namespace std;

int main(){
	int numberArray[] = {8,5,3,1,7,0};
	int n = sizeof(numberArray)/sizeof(numberArray[0]);
	for(int i=0; i<n-1; i++){
		int min_index=i;
		
		for(int j=i+1; j<n; j++){
			if(numberArray[j]<numberArray[min_index]){
				min_index=j;
			}
		}
		if(numberArray[min_index]!=numberArray[i]){
				int temp = numberArray[i];
				numberArray[i]=numberArray[min_index];
				numberArray[min_index]=temp;
			}
	}
	for(int k=0; k<n; k++){
			cout << numberArray[k] << endl;
		}
	return 0;
}
