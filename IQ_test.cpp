#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{
    int n;
    int number_of_even=0;
    int number_of_odd=0;
    int index=1;
    int num;
    int odd_index=0;
    int even_index=0;
    int _majority_is_even=0;
    vector<int> arr;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    for (int j=0;j<n;j++)
    {
        if (arr[j]%2==0)
        {
            number_of_even++;
        }
        else {
            number_of_odd++;
        }
    }
    if (number_of_even>number_of_odd)
    {
        _majority_is_even=1;
    }
    if (_majority_is_even==1)
    {
        for (int k=0;k<n;k++)
        {
            if (arr[k]%2!=0)
            {
                odd_index=k+1;
                break;
            }
        }
        cout<<odd_index<<endl;
    }
    else {
        for (int l=0;l<n;l++)
        {
            if (arr[l]%2==0)
            {
                even_index=l+1;
                break;
            }
        }
        cout<<even_index<<endl;
    }

}