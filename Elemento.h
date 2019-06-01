#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>
using std::string;
#include <iostream>
using std::endl;
using std::cin;

class Elemento{
    public:
        Elemento();
        virtual string getClass();
        virtual string toString();

};
#endif