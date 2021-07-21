#include<iostream>
using namespace std;
int power(int x,int n){
    if(n ==0){
        return 1;
    }
    if(x ==0 ){
        return 0;
    }
    int ans = power(x,n-1);
    return ans*x;
}
int main(){
     int x,n;
     cin>> x >>n;
     
     int pow = power(x,n);
     cout<< pow <<endl;
}