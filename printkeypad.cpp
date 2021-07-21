#include<iostream>
using namespace std;
string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(int num,string output){
    if(num == 0){
        cout<<output<<endl;
        return;
    }
    string temp = key[num%10];
    for(int i=0;i<temp.size();i++){
        keypad(num/10,temp[i]+output);
    }
}
void printkeypad(int num){
    string output = "";
    keypad(num,output);
}
int main(){
    int num;
    cin>>num;
   
   printkeypad(num);
}