#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string phone;
    string person_id;

public:
    Person();
    void inputInfo();
    void displayInfo() const;
    void updateInfo();
    bool searchInfo(const string& search_id) const;
    void deleteInfo();
};

