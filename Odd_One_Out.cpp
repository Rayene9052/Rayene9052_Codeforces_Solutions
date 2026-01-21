#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
        {
                int t;
                cin>>t;
                vector<int> results;
                for (int i=0;i<t;i++)

                {

                    int a,b,c;
                    cin>>a>>b>>c;
                    vector<int> nums={a,b,c};
                    int majority=0;
                    if (a==b || a==c)
                    {
                        majority=a;

                    }
                    else
                    {
                        majority=b;
                    }
                    for (int j=0;j<3;j++)
                    {
                        if (nums[j]!=majority)
                        {
                            results.push_back(nums[j]);
                            break;
                        }
                    }

                }
            for (int i=0;i<results.size();i++)
        {
            cout<<results[i]<<endl;
        }

        }
        