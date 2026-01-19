#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    vector<string> results;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a%3==0)
        {
            results.push_back("Second");
        }
        else
        {
            results.push_back("First");
        }
    }
    for (int j = 0; j < results.size(); j++)
    {
        cout << results[j] << endl;
    }
}