#include <iostream>
using namespace std;

class MyClass {         // The class
  protected:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Hello World!\n";
      cout<< "how to join the youtube in india brother that's why you are here";
    }
    void name(){
      cout<< "\nWhat is your name brother";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  myObj.name();
  return 0;
}
