#include "PERSON.h"

Person::Person() : name(""), phone(""), person_id("") {}

void Person::inputInfo() {
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap so dien thoai: ";
    getline(cin, phone);
    cout << "Nhap ma: ";
    getline(cin, person_id);
}

void Person::displayInfo() const {
    cout << "Ma người: " << person_id << ", Ten: " << name << ", SĐT: " << phone << endl;
}

void Person::updateInfo() {
    cout << "Cap nhat ten: ";
    getline(cin, name);
    cout << "Cap nhat so dien thoai: ";
    getline(cin, phone);
}

bool Person::searchInfo(const string& search_id) const {
    return person_id == search_id;
}

void Person::deleteInfo() {
    name = "";
    phone = "";
    person_id = "";
}
