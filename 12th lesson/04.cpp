//Huynh Phuong Dai - ITITWE21039
#include <iostream>
using std::cout;
using std::endl;



class Time {
public:
Time(); // constructor
Time(int=0, int=0, int=0); // constructor



void setTime( int, int, int ); // set hour, minute, second
void printMilitary(); // print military time format
private:
int hour;
int minute;
int second; // 0 – 23
};



Time::Time(int h, int m, int s) {
hour = h;
minute = m;
second = s;
}

void Time::setTime( int h, int m, int s )
{
hour = ( h >= 0 && h < 24 ) ? h : 0;
minute = ( m >= 0 && m < 60 ) ? m : 0;
second = ( s >= 0 && s < 60 ) ? s : 0;
}



void Time::printMilitary()
{
cout << ( hour < 10 ? "0" : "" ) << hour << ":"
<< ( minute < 10 ? "0" : "" ) << minute;
}



int main()
{
Time t(10);
cout << "The initial military time is ";
t.printMilitary();
t.setTime( 13, 27, 6 );
cout << "\n\nMilitary time after setTime is ";
t.printMilitary();
}

