//Huynh Phuong Dai - ITITWE21039

#include <iostream>
using namespace std;
//We have two pointers point starting from the beginnig of the array
//first pointer keeps track of next position to be filled in output string
//the second to is to go through all character 
// the the pointers found any non space character the character is copied to the location of the first pointer then move on to the next set of character

void removeSpaces(string &str)
{
    int n = str.length();
    int i = 0, j = -1;
    bool spaceFound = false;
    while (++j < n && str[j] == ' ');
    while (j < n)
    {
        if (str[j] != ' ')
        {
            if ((str[j] == '.' || str[j] == ',' ||str[j] == '?') && i - 1 >= 0 && str[i - 1] == ' ')
                str[i - 1] = str[j++];
            else
                str[i++] = str[j++];
            spaceFound = false;
        }
        else if (str[j++] == ' ')
        {
            if (!spaceFound)
            {
                str[i++] = ' ';
                spaceFound = true;
            }
        }
    }
    if (i <= 1)
        str.erase(str.begin() + i, str.end());
    else
        str.erase(str.begin() + i - 1, str.end());
}
 
int main()
{
    string str = "  THIs    is a .string that will get remove any spare spaces     ";

 
    removeSpaces(str);
 
    cout << str;
 
    return 0;
}