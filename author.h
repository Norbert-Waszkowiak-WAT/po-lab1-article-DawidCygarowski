#ifndef AUTHOR
#define AUTHOR
#include <string>

using namespace std;

class Author {

    private: 
    string name;
    string surname;
    
    public: 
    Author();
    Author(string n, string s);
    void print();
    string toString() const;
    string getName();
    string getSurname();

};
#endif