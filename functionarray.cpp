#include<iostream>
using namespace std;
// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}