#include "khachang.h"

KhachHang::KhachHang() : Person(), customer_id("") {}

void KhachHang::inputInfo() {
    Person::inputInfo();  // Gọi phương thức inputInfo của lớp Nguoi
    cout << "Nhap ma khach hang: ";
    getline(cin, customer_id);
}

void KhachHang::displayInfo() const {
    Person::displayInfo();  // Gọi phương thức displayInfo của lớp Nguoi
    cout << "Ma kahch hang: " << customer_id << endl;
}
