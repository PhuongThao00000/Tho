#ifndef San_H
#define San_H
#include<iostream>
#include <string>
#include <vector>
using namespace std;  

// class Service{
//     //private:
//     protected:
//     string maDichVu;
//     static double sum;
//     public:
//     Service(const string& maDVu = "");
//     void setmaDichVu(){
//         cout << "Ma Dich Vu:";
//         cin >> maDichVu;
//     }
//     virtual void NhapThongTin() = 0;
//     virtual void XuatThongTin(){};
//     virtual void SuaThongTin(){};
//     string getmaDichVu() const{
//         return maDichVu;
//     }
//     static void ThanhTien(){
//         sum+=sum;
//         cout << "Tổng tiền cần thanh toán: "<< sum << "VND";
//     }
// };

class DatSan{ //public Service{
    private:
    static vector<string> ground_code;
    // static const string hour_code[];them phuong thuc Xuat cac khung gio
    string ngaydat;
    int d, m, y;
    string tensan;
    string giodat;
    string ThongTin;
    // const static string ground_name[5]; them phuong thuc Xuat Ten San
    //2 mức giá: sân 5: 270, sân 7: 300;
    //bool paid_or_not; ko co bien nay tai vi da thay doi trang thai san 
    //bang cach them ki hieu khung gio,songay,sothang,sonam vao sau ten 
    //ma san
    public:
    DatSan();
    static bool LeapYear(int y){
        return (y % 400==0||y % 4==0 && y % 100!= 0);
    };
    static int DayOfMonth(int m, int y);
    static bool ValidDate(int d, int m, int y);
    void SetDate();
    void NhapThongTin();
    int getGiaSan() const ;//làm việc với thành viên tĩnh=> phương thức tĩnh
    bool CheckTrangthaiSan();
    void showTrangThaiSan();
    void XuatThongTin();
    void SuaThongTin();
};

// class Customer: public DatSan{
//     string phone_number;
//     string customer_code;
//     string customer_name;
//     public:
//         Customer(string customer_code = "00", string customer_name = "-------", string phnumber = "000000000");
//         void NhapThongTin();
//         void XuatThongTin();
//         void SuaThongTin();   
// };

// class Drink: public Service{
//     private:
//     char STT;
//     string drink_code;
//     string name_drink;
//     int price;
//     int quantity;
//     public:
//     Drink(char stt = 0, string code = "00", string name = "", int price = 0, int qty = 0);
//     virtual void NhapThongTin();
//     virtual void XuatThongTin();
//     virtual void SuaThongTin();
// };

// class GiuXe{
//     private:
// };
//quan ly hoa don de luu thong tin
#endif
