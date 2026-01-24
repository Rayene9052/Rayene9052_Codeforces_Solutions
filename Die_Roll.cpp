#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main()
    {
        int W,Y;
        
        cin>>W>>Y;
        int max=0;
        if (W>Y)
        {
            max=W;
        }
        else
        {
            max=Y;
        }

        int possibilities=6-max;

      if (possibilities<0) cout<<0<<"/"<<1<<endl;
      else if (possibilities==6) cout<<1<<"/"<<1<<endl;
      else
        cout<<to_string((possibilities+1)/gcd(possibilities+1,6))+"/"+to_string(6/gcd(possibilities+1,6))<<endl;
    }