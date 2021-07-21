#include<iostream>
using namespace std;
int sum(int a,int size,int si = 0){
    int ans = 0;
    for(int i=si;i<size;i++){
        ans+=a[i];
    }
    return ans;
}
int main(){
    int a[];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cout<<a[n];
    } 
    cout<< sum(a,20)<<endl;
}