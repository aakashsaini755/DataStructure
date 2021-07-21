#include<iostream>
using namespace std;
int sub(string input,string output[]){
    if(input.size() == 0){
        output[0] = "" ;
        return 1;
    }
    string  smallstring = input.substr(1);
    int smalloutput = sub(smallstring,output);
    for(int i=0;i< smalloutput ;i++){
        output[i + smalloutput] = input[0] + output[i];
    }
    return 2*smalloutput;
}
int main(){
    string input;
    cin>>input;

    string *output = new string[1000];
    int count = sub(input,output);
    for(int i=0;i < count;i++){
        cout << output[i] <<endl;
    }
}