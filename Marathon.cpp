#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        vector<int> runners(4);
        vector<int> results;
        for (int i=0;i<t;i++)
        {
            cin>>runners[0]>>runners[1]>>runners[2]>>runners[3];
            int Timur=runners[0];
            sort(runners.begin(),runners.end(),greater<int>());
            int number_of_better_runners=0;
            int j=0;
            while (runners[j]>Timur)
            {
                number_of_better_runners++;
                j++;
            }
            results.push_back(number_of_better_runners);

        }
        for (int k=0;k<results.size();k++)
        {
            cout<<results[k]<<endl;
        }
        
    }



        
    