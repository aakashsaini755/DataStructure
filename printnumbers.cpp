#include<iostream>
using namespace std;
void  printnum(int n){
  if(n > 0){
      printnum(n-1);
      cout<< n <<" ";
  }  
}
int main(){
    int n;
    cin>> n;
    printnum(n);
}