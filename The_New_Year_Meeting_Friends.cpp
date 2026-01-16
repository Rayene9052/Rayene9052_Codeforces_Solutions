#include<iostream>
#include<algorithm>
#include<vector>    
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<int>v;
    v.push_back(x1);    
    v.push_back(x2);
    v.push_back(x3);
    sort(v.begin(),v.end());
    int mediam=v[1];
    int distance=abs(x1-mediam)+abs(x2-mediam)+abs(x3-mediam);
    cout<<distance<<endl;
    return 0;

}