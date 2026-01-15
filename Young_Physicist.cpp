#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n,x,y,z ;
    int sum_x=0,sum_y=0,sum_z=0;
    do {
        cin>>n;
    }while(!(n>=1 && n<=100));
    for (int i=0;i<n;i++)
    {
        do {
        cin>>x>>y>>z;}while(!(x>=-100 && x<=100 && y>=-100 && y<=100 && z>=-100 && z<=100)) ;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    if (sum_x==0 && sum_y==0 && sum_z==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";

}
