#include "San.h"

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//class Service

// Service::Service(const string& maDVu):maDichVu(maDVu){}

//class DatSan
int daytab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const double price[3]={270,300,350};
vector<string> DatSan::ground_code;
DatSan::DatSan():d(1),m(1),y(2000),ngaydat("01012000"),tensan("51"),giodat("A"),ThongTin(ngaydat+tensan+giodat){};

int DatSan::DayOfMonth(int m, int y){
    daytab[2]=LeapYear(y)?29:28;
    return daytab[m];
}

bool betw(int a, int b, int c){
    return (a >= b)&&(a <= c);
}

bool DatSan::ValidDate(int d, int m, int y){
    return betw(m, 1, 12)&& betw(d,1,DayOfMonth(m,y));
}

void DatSan::SetDate(){
    int day, mo, ye;
    cout << "Nhập ngày tháng năm đặt: "; 
    cout << "d: ";
    cin >> day;
    cout << "m: ";
    cin >> mo ;
    cout << "y: "; 
    cin >> ye;
    if(!ValidDate(day,mo,ye)){
        cout << "Ngày tháng năm không hợp lệ!"<<endl;
        cin >> day >> mo >>ye ;
    }
    d = day; m = mo; y = ye;
}

bool DatSan::CheckTrangthaiSan(){
        for (const auto& code : ground_code) {
            if (code == ThongTin) {
                return true;
            }
        }
        return false;
}

void DatSan::showTrangThaiSan(){
    if(CheckTrangthaiSan()){
        cout << "Sân đã đặt\n";
    }
    else{
        cout << "Sân đang trống\n";
    }
}

void DatSan::NhapThongTin(){
    cout << "Nhap ten san: ";
    cin >> tensan;
    cout << "Nhap gio san: ";
    cin >> giodat;
    SetDate();
    ngaydat = to_string(d)+to_string(m)+to_string(y);
    string ThongTin = ngaydat+giodat+tensan;
    showTrangThaiSan();
}


 int DatSan::getGiaSan() const {
    //return (tensan[0].compare('5'))?price[0]:price[1];
    if(tensan[0] == '5')
        return price[0];
    if(tensan[0] == '7')
        return price[1];
    return 0;
}

void XuatTenSan(){
    cout << "Các sân: "<<endl;
    cout << "Sân 5: 51, 52, 53"<<endl;
    cout << "Sân 7: 71, 72"<<endl;
}
void XuatKhungGio(){
    cout << "Các khung giờ: "<<endl
    << "A. 8:00 - 10:00"<<endl
    << "B. 10:00 - 12:00"<<endl
    << "C. 14:00 - 16:00"<<endl
    << "D. 16:00 - 19:00"<<endl;
}
