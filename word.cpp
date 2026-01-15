#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    string s;
    do {
        cin>>s;

        }while(!(s.length()>=1 && s.length()<=100));
    int lowercase=0;
    int uppercase=0;
    for (char c:s)
    {
        if (static_cast<int>(c)>=97 && static_cast<int>(c)<=122)
        {
            lowercase++;
        }
        if (static_cast<int>(c)>=65 && static_cast<int>(c)<=91)
        {
            uppercase++;
        }
    }
    if (uppercase<=lowercase)
    {
        for( char &c:s)
            {
                c=tolower(c);
             }
    }
    else {
        for (char &c:s){
            c=toupper(c);
        }
    }

    cout<<s;
}
