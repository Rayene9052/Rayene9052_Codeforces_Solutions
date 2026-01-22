#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> disliked;
    vector<int> polycarp;
    int i=1;
    while (polycarp.size()<1000)
    {
        if ((i%3!=0) && (i%10!=3))
        {
            polycarp.push_back(i);
        }
        i++;
    }
    int t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
        int k;
        cin>>k;
        disliked.push_back(polycarp[k-1]);
    }
    for (int j=0;j<t;j++)
    {
        cout<<disliked[j]<<endl;
    }
}