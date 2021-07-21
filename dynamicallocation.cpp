#include<iostream>
using namespace std;
int main(){
    int i =10; // this stack memory allocation
    
    // dynamic memory allocation 
    int *p = new int;
     *p=10;
     cout<<*p<<endl;
     double *d = new double;
     *d  = 11.23;
     cout<<*d<<endl;
     char *c = new char;
     *c = 'A';
     cout<< *c<< endl;
     // array allocation
     int *pa = new int[40];
     int n;
     cin>>n;
     int *pa2 = new int[n];
     for(int i=0;i<n;i++){
         cin>>pa2[i];
     }
   int max = -1;
   for(int i=0;i<n;i++){
       if(max < pa2[i]){
           max=pa2[i];
       }
   }
   cout<< max<<endl;
}