/*Nhap so thu 1, so thu2 so thu 3, so sanh tim so lon nhat gan vao lonnhat, lonnhi. lien tuc loop den khi het so luong so cua minh nhap bang so luong so da nhap*/
//Huynh Phuong Dai - ITITWE21039
#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int lonnhat = 0, lonnhi=0;
    int n=1;
    int num1=0,num2=0,num3=0;
    cout <<"nhap so so N so ban can nhap ";
    cin >> n;
    int count = 1;
    cout << "Nhap so" << endl;
    while (count <= n)
    {
        cin >> num1;
        ++count;
        cin >> num2;
        ++count;
        cin >> num3;
        ++count;
        if (num1 < num2 && num1 <num3)
        {
            lonnhat=num2;
            lonnhi=num3;
        }
    }
    cout << "Hai so lon nhat la:" << lonnhat << " va " << lonnhi;
    return 0;
}