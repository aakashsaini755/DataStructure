#include<iostream>
using namespace std;
void merge(int input[],int s1,int e1,int s2,int e2){
    int size =e2-s1+1;
    int x=s1;
    int *output = new int[e2-s1+1];
    int i=0;
    while(s1<=e1 && s2<=e2) {
        if(input[s1] <= input[s2]) {
            output[i] = input[s1];
            s1++;
            i++;
            // continue;
        }
        else {
            output[i] = input[s2];
            i++;
            s2++;
        }
    }
    if(s1<=e1) {
        for(s1;s1<=e1;s1++) {
            output[i] = input[s1];
            i++;
        }
    }
    if(s2<=e2) {
        for(s2;s2<=e2;s2++){
            output[i] = input[s2];
            i++;
        }
    }
    for(int j=0;j<size;j++)
    	input[j+x] = output[j];
    
    delete[] output;
} 
void helper(int input[],int start,int end) {
    if(start>=end)
        return;
    else {
        helper(input,start,(end+start)/2);
        helper(input,(end+start+2)/2,end);
        merge(input,start,(end+start)/2,(end+start+2)/2,end);
    }
}

void mergeSort(int input[], int size){
	// Write your code here
    return helper(input,0,size-1);
        
}

int main(){
    int length;
    cin>>length;
    int* input = new int[length];
    for(int i=0;i< length;i++){
        cin>> input[i];
    }
    mergeSort(input,length);
    for(int i=0;i< length;i++){
        cout<< input[i]<< " ";
    }
}