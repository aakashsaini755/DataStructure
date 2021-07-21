#include<iostream>
using namespace std;
void helper(int input[],int size,int output[],int m){
    if(size == 0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
            cout<<endl;
            return;
        }
    }
    helper(input+1,size-1,output,m);
     int smalloutput[m+1];
     for(int i=0;i<m;i++){
         smalloutput[i] = output[i];
     }
     smalloutput[m] = input[0];
     helper(input+1,size-1,smalloutput,m+1);
}
void printsubsetofarray(int input[],int size){
    int output[1000];
     int m=0;
    helper(input,size,output,m);
}
int main(){
    int input[1000],length;
    cin>>length;
    for(int i=0;i<length;i++){
        cin>>input[i];
    }
    printsubsetofarray(input,length);
    return 0;
}