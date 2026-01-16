#include<iostream>
#include<algorithm>
#include<vector>    
using namespace std;
int main()
    {

        int n;
        cin>>n;
        vector<int> performances(n);
        int amazing_count=0;
        for (int i=0;i<n;i++)
        {
            cin>>performances[i];

        }
        int j=0;
        int max_performance=performances[0];
        int min_performance=performances[0];
        while (j<n)
        {
            if(performances[j]>max_performance)
            { amazing_count++;
            max_performance=performances[j];
            }
            if(performances[j]<min_performance)
            {
                amazing_count++;
                min_performance=performances[j];
            }
            j++;
        }
        cout<<amazing_count<<endl;
    }