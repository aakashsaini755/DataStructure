#include<iostream>
using namespace std;
int getCode(string input,string output[]){
    if(input.size() == 0){
        output[0] = "";
        return 1;
    }
    int i = input[0]-48;
    char c = 'a' + i-1;
    int s1 = getCode(input.substr(1),output);
    for(int i=0;i<s1;i++){
        output[i] = c+output[i];
    }
    int s2=0;
    if(input[1] != '\0'){
        i = i*10+input[1]-48;
        c = 'a'+i-1;
        if(i >= 10 && i <= 26){
            s2 = getCode(input.substr(2),output+s1);
            for(int i=0;i<s2;i++){
                output[i+s1] = c+output[i+s1];
            }
        }
    }
   return s1 + s2;
}
int main(){
    string input;
    cin>>input;
    string output[1000];
    int count = getCode(input,output);
    for(int i=0;i < count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}