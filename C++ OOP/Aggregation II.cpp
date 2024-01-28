#include <iostream>
#include <conio.h>
using namespace std;

class Address {
public:
    Address(string a) : add(a) {
    }
    string add;
};

class Employee {
private:
    Address* add;
    string name;

public:
    Employee(string n, Address* obj) : name(n), add(obj) {
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << add->add << endl;
    }
};

int main() {
    Address A("Pakistan");
    Employee E("Arhum", &A);
    E.display();
    
    return 0;
}

