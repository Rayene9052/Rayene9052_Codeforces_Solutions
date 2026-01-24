#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// that's the lazy way
int main()
    {

        int t;
        cin>>t;
        vector<string> results;
        for (int i=0;i<t;i++)
        {
            string abc;
            cin>>abc;
            if (abc=="abc" || abc=="acb" || abc=="bac" ||  abc=="cba")
            {
                results.push_back("YES");
            }
            else
            {
                results.push_back("NO");
            }
        }
        for (int j=0;j<t;j++)
        {
            cout<<results[j]<<endl;
        }
        
    }
// more math way
/*
int diff = 0;
string s;
cin >> s;
for (int i = 0; i < 3; i++)
    if (s[i] != "abc"[i]) diff++;

cout << (diff <= 2 ? "YES" : "NO") << endl;


*/