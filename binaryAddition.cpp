#include <iostream>
using namespace std;
int main(){
    short a = 0b000001001;
    short b = 0b000001101;

    short sum = a+b;
    float division = b/a;
    cout << "The sum of the binary " << a << " and bnary b is: " << sum << endl;
    cout << "The division of the binary a and bnary b is: " << division << endl;
}
