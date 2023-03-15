#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	// Viet chuong trinh nhap vao muc luong(theo gio lam viec), so gio lam viec,
	// tien thuong, tien phat. Tinh so tien thuc linh.
    int a;
    int b;
    int c;
    int d;
    cout<<"Nhap vao muc luong: ";
    cin>>a;
    cout<<"Nhap vao so gio lam viec: ";
    cin>>b;
    cout<<"Nhap vao so tien thuong: ";
    cin>>c;
    cout<<"Nhap vao so tien phat: ";
    cin>>d;
    cout<<"Tong so tien thuc linh la: " <<a*b+c-d<< endl;
    return 0;
}
