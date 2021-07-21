#include<iostream>
#include<sys/time.h>
using namespace std;
long gettimeinmicrosecond(){
    struct timeval start;
    gettimeofday(&start,NULL);
    return start.tv_sec * 1000000+ start.tv_usec;    
}
void selectionsort(int arr[],int n){
    for(int j=0;j< n-1;j++){
        int min = arr[j];
        int pos = j;
        for(int i= j+1;i < n;i++){
            if(arr[i] < min){
                min = arr[i];
                pos = i;
            }
            int temp = arr[j];
            arr[j] = min;
            arr[pos] = temp;
    
        }
    }
}
int main(){
    for(int n=10;n <= 1000000;n*=10){
        int *arr = new int[n];
        long starttime,endtime;
        for(int i=0;i<n;i++){
            arr[i]= n-i;
        }
        starttime = gettimeinmicrosecond();
        selectionsort(arr,n);
        endtime = gettimeinmicrosecond();
        cout<<"Selection Sort n = "<<n<<"Time = "<<endtime-starttime<<endl;
    }
}