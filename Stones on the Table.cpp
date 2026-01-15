#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isValid(int n)
{
    if (1<=n && n<=50)
        {
                return true ;
        }
        return false;
}
bool isValidstring(string s)
{
    for (int i=0;i<s.length();i++)
    {
        if (s[i]!='R' && s[i]!='G'  && s[i]!='B' )
            return false;
    }
    return true;
}
int neighbor(int n , string s)
{
    int compt=0;
    for (int i=0 ; i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            compt++;
        }

    }

return compt;
}
int main()
{

    int n; string s;
    do {


    do{
    cin >>n;}while(!isValid(n)) ;

     do{
    cin >>s;}while(!isValidstring(s)) ;

    }while(n!=s.length());
    int c=neighbor(n,s);
    cout<<c ;

}
