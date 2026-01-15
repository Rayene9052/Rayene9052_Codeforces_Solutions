#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isValid(int a, int b)
{
    if (1<=a && a<=b && b<=10)
        {
                return true ;
        }
        return false;
}


int calcul(int a , int b)
{
    int compt=0;
    while(a<=b)
    {
        a*=3,
        b*=2;
        compt++;
    }
    return compt;}
int main()
{
    int a,b;
    do{
    cin >> a >> b;}while(!isValid(a,b)) ;
    int c;
    c=calcul(a,b);
    cout<<c;
    return 0;
}
