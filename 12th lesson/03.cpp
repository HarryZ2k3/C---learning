//Huynh Phuong Dai - ITITWE21039

#include <iostream>

using namespace std;

int ReturnMin(int a[5]);
int main()
{
    int arr[5]= {1,5,0,7,8};
    cout << "minvalue is:" << ReturnMin(arr);
    return 0;
}

int ReturnMin(int a[5])
{
    int tempMin=*a;
    for (int i=1;i<5;i++)
    {
        if (tempMin >a[i])
        {
            tempMin = a[i];
        }
        else 
            continue;
    }
    return tempMin;
}