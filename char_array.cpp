#include<iostream>
using namespace std;
int main(){
     char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
 
//  char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;

// char b[] = "xyz";
// char *c = &b[0];
// c++;
// cout << c << endl;

char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];

}