#include<iostream>
#include<algorithm>
#include<vector>    
using namespace std;

int main()
{
    int t;
    int n;
    cin>>n;
    vector<string> arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>t;
        int first_digit_t=t%10,second_digit_t=(t%100)/10,third_digit_t=(t%1000)/100,fourth_digit_t=(t%10000)/1000,fifth_digit_t=(t%100000)/10000,sixth_digit_t=(t%1000000)/100000;
        if ((first_digit_t+second_digit_t+third_digit_t)==(fourth_digit_t+fifth_digit_t+sixth_digit_t))
        {
            arr.push_back("YES");
        }
        else {

            arr.push_back("NO");

    }
    }
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    
}