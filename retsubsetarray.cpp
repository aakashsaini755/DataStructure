#include<iostream>
using namespace std;
int subset(int input[],int length,int output[][20])
{
    if(length==0)
    {
        output[0][0]=0;
        return 1;
    }
    int ans=subset(input+1,length-1,output);
    
    for(int i=0;i<ans;i++)
    {
        output[i+ans][1]=input[0];
        output[i+ans][0]=output[i][0]+1;
        for(int j=1;j<=output[i][0];j++)
        {
            output[i+ans][j+1]=output[i][j];
        }
    }
    return 2*ans;
    
}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
