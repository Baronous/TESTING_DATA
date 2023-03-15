#include<iostream>
using namespace std;
int main()
{
//nhap vao 2 so, hoan doi gia tri cua 2 so do (khong dung swap) 
    int a;
    int b;
    cout<<"Nhap vao so a = "; cin>>a;
    cout<<"Nhap vao so b = "; cin>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d", a, b);
    return 0;

}
