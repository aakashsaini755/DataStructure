#include<iostream>
using namespace std;
void increment(int &n){
     n++;
}
//bad practice
int& f(int n){
    int a = n;
    return a;
}
//bad practice
int* f2(){
    int i=10;
    return &i;
}

int main(){
    int *p = f2();
    int i;  
    i =10;
    increment(i);
    cout<<i << endl;

    int& k1 = f(i);
    int &j = i;
    i++;
    cout<< j <<endl;
    j++;
    cout<< i <<endl;

    int k = 100;
    j=k;
    cout<<i << endl; 
}