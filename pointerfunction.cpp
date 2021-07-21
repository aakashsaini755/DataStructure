#include<iostream>
using namespace std;
void print(int *p){
    cout<< p <<endl;
    // cout<< sizeof(p)<<endl;
}
void incrementpointer(int *p){
    cout<< *p << endl;
    (*p)++;
}

void increase(int *p,int size){
    cout<<sizeof(p)<<endl;
    int ans =0;
    for(int i=0;i<size;i++){
      ans+= p[i];
    }
    cout<< ans;
}
int main(){
    int i = 10;
    int a[10];
    int *p = &i;

    print(p);
    incrementpointer(p);

    cout<< *p << endl;
    
    increase(a,7);
    cout<< sizeof(a)<<endl;
}
