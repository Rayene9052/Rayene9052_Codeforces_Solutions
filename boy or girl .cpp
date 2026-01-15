#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isValid(const string& s) {
    if (s.length() > 100) {
        return false;
    }}
bool recherche(string s,char c)
{
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==c)
        {
            return true;
        }

    }return false ;
}
int countdistinct(string s)
{
    int compt=0;
    string dist;
    for(int i=0 ; i<s.length();i++)
    {
        if (!recherche(dist,s[i]))
            {
            dist+=s[i];

            compt++;

        }
    }
    return (compt);


}
int main()
{

    string s;
    do {

        cin >> s;
    } while (!isValid(s));
   int compt=countdistinct(s);
   if (compt%2==0)
   {
       cout<<"CHAT WITH HER!";
   }
   else{
    cout<<"IGNORE HIM!";
   }

}
