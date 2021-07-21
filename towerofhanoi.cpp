#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char helper) {
    // if(n==0)
    // {
    //     return;
    // }
	if (n == 1) {
		cout << source<<" "<< helper << endl;
		return;
	}

	towerOfHanoi(n - 1, source, helper, destination);
	cout  << source<<" " << helper << endl;
	towerOfHanoi(n - 1, destination, source, helper);
}
int main(){
    int n;
    cin>>n;
    towerOfHanoi(n,'a','b','c');
}
