#include<iostream>
using namespace std;

int subsetSumToK(int input[], int length, int output[][50], int k) 
{
	if(length==0)
    {
        if(k==0)
        {
            output[0][0]=0;
        	return 1;
        }
        else 
        	return 0;
    }
    
    int o1[1000][50];
    int o2[1000][50];
    
    int s1= subsetSumToK(input+1,length-1,o1,k-input[0]);
    int s2= subsetSumToK(input+1,length-1,o2,k);
    
    
    int x = 0; //taking x to make things easier
    for(int i=0;i<s1;i++)
    {
        output[x][0] = o1[i][0]+1 ; //you were assigning the value of o1 to itself because of whicht there was no output as we need elements in the output given to us
        output[x][1] = input[0];
        for(int j=1;j<=o1[i][0];j++)
        {
            output[x][j+1]=o1[i][j];
        }
        x++;
    }

	for(int i=0;i<s2;i++)
    {
        //output[i][0] = o2[i][0]+1 ; //no need of this
        for(int j=0;j<=o2[i][0];j++) //j should start from 0
        {
            output[x][j]=o2[i][j];
        }
    	x++;
    }    
    

	return x;
}


void printSubsetSumToK(int input[], int size, int k) {
   
  int output[10000][50] ;  
    
  int length = subsetSumToK(input, size, output, k);

  for( int i = 0; i < length; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
    int input[1000],length,k;
    cin>>length;
    for(int i=0;i<length;i++){
        cin>>input[i];
    }
    cin>>k;
    printSubsetSumToK(input,length,k);
}