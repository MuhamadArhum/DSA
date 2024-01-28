// Array of objects

#include<iostream>
using namespace std;

// Define a class for the objects

class MyObject {
public:
    std::string name;
    int value;
  
    MyObject(std::string name, int value) {
        this->name = name;
        this->value = value;
    }
};
main(){

// Create an array of objects
MyObject arrayOfObjects[] = {
    MyObject("Object 1", 10),
    MyObject("Object 2", 20),
    MyObject("Object 3", 30)
};

// Accessing individual objects
    cout << arrayOfObjects[0].name <<endl;
	cout << arrayOfObjects[1].value <<endl;
	
}
