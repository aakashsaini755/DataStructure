#include<iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num == 0)
    {
        output[0] = "";
        return 1;
    }
    
    int num1 = num / 10;
    int rem = num % 10;
    
    int smallOutput = keypad(num1, output);
    
    string s;
    
    if(rem == 2)
    {
        s = "abc";
    }
    else if(rem == 3)
    {
        s = "def";
    }
    else if(rem == 4)
    {
        s = "ghi";
    }
    else if(rem == 5)
    {
        s = "jkl";
    }
    else if(rem == 6)
    {
        s = "mno";
    }
    else if(rem == 7)
    {
        s = "pqrs";
    }
    else if(rem == 8)
    {
        s = "tuv";
    }
    else if(rem == 9)
    {
        s = "wxyz";
    }
    
    int i, j;
    int count = 0;
    
    string output1[smallOutput];
    
    for(i = 0; i < smallOutput; i++)
    {
        output1[i] = output[i];
    }
    
    for(i = 0 ; i < s.size(); i++)
    {
        for(j = 0; j < smallOutput; j++)
        {
            output[count] = output1[j] + s[i];
            count++;
        }
        
    }
    
    return count;
}
int main(){
    int num;
    cin>>num;
    string output[1000];
    int count = keypad(num,output);
    for(int i=0;i<count && i<1000;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}