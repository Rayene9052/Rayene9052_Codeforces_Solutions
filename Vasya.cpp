#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
        { 
                int a,b;
                cin>>a>>b;
                int x,y;
                x=min(a,b);
                y=(max(a,b)-x)/2;
                cout<<x<<" "<<y<<endl;

        }