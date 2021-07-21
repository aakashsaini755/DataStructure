#include<iostream>
using namespace std;
double average(double a,double b){
    double c = (a+b)/2;
    cout<< c << endl;
}
int main(){
    double a,b;
    cin>>a>>b;

    average(a,b);
}