#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	// Nhap vao 2 so khac 0, in ra tong, hieu, tich, thuong cua 2 so do.
    int a;
    int b;
    cout<<"Nhap vao so thu nhat: "; cin>>a;
    cout<<"Nhap vao so thu hai: "; cin>>b;
    cout<<"tong cua hai so la: " <<a+b<< endl;
    cout<<"hieu cua hai so la: " <<a-b<< endl;
    cout<<"tich cua hai so la: " <<a*b<< endl;
    cout<<"thuong cua hai so la: " <<(float)a/b<< endl;
    return 0;
}
