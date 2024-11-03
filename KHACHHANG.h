#ifndef KHACHANG_H
#define KHACHANG_H

#include "Person.h"

class KhachHang : public Person {
private:
    string customer_id;

public:
    KhachHang();
    void inputInfo();
    void displayInfo() const;
    using Nguoi::updateInfo;   // Kế thừa phương thức updateInfo
    using Nguoi::searchInfo;    // Kế thừa phương thức searchInfo
    using Nguoi::deleteInfo;    // Kế thừa phương thức deleteInfo
};

#endif // KHACHANG_H
