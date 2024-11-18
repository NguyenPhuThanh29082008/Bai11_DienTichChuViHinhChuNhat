// Bai11_DienTichChuViHinhChuNhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double dai, rong, chuvi, dientich;

    cout << "Nhap chieu dai: ";  cin >> dai; cout << "Nhap chieu rong: "; cin >> rong;
    cout << "Chu vi hinh chu nhat: \n";
    chuvi = (dai + rong) * 2;
    cout << "ta co: " << "(" << dai << "+" << rong << ")" << "*2 = " << chuvi << endl;

    cout << "Dien tich hinh chu nhat: \n";
    dientich = dai * rong;
    cout << "ta co: " << dai << "*" << rong << "= " << dientich << endl;


    system("pause");
    return 0;
}
