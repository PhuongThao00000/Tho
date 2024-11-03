#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string>
using namespace std;

class Nguoi {
protected:
    string name;
    string phone;
    string person_id;

public:
    Nguoi();
    void inputInfo();
    void displayInfo() const;
    void updateInfo();
    bool searchInfo(const string& search_id) const;
    void deleteInfo();
};
