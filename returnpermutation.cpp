#include<iostream>
#include <string>

using namespace std;
int permute(string input,string output[]){
    if(input.size() == 0){
        output[0] = "";
        return 1;
    }
    string smalloutput[1000];
    int small= permute(input.substr(1),smalloutput);
    int k=0;
    for(int i=0;i<small;i++){
        for(int j=0;j<= smalloutput[i].length();j++){
            output[k++] = smalloutput[i].substr(0,j) + input[0] + smalloutput[i].substr(j);
        }
    }
    return k;
}
int main(){
    string input;
    cin>>input;
    string output[10000];
    int count = permute(input,output);
    for(int i=0;i< count && i< 10000;i++){
        cout<<output[i]<<endl;
    }
}