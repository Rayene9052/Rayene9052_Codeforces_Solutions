#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool different(string s)
{
    int nbr_0=0;
    int nbr_1=0;
     for (char c:s)
    {
        if (c=='0') nbr_0+=1;
        else nbr_1+=1;
    }

    if (nbr_1==s.length() || (nbr_0==s.length()) ) return false;


     else {return true;}
}
bool onezero(string s)
{

    for (char c:s)
    {
        if (c!='0' && c!='1')
            return(false);
    }
    return (true);
}
int main()
{
    int win=0;
    string s;


      cin>>s;
       if (s.length() > 100 || !onezero(s) || !different(s)) {
        cout << "NO";
        return 0;
    }

    int nbr_voisin=1;
    for(int i=1 ; i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {

            nbr_voisin+=1;

            if (nbr_voisin>=7){ win=1;}
        }
        else{
            nbr_voisin=1;
        }
    }


    if ( win ) cout<<"YES";
    else cout<<"NO";
}
