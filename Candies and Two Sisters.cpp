#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin>>t;
    vector<int> candies(t);
    int number_of_ways=0;
    for (int i=0;i<t;i++)
    {
        cin>>candies[i];
    }
    for (int i=0;i<t;i++)
    {
        if (candies[i]%2==0 && candies[i]>2)
        {
            number_of_ways=int(candies[i]/2);
            cout<<number_of_ways-1<<endl;
        }
        else if (candies[i]%2!=0 && candies[i]>1)
        {
            number_of_ways=int(candies[i]/2);
            cout<<number_of_ways<<endl;
        }
        else
        {
            cout<<0<<endl;
        }


    }
}