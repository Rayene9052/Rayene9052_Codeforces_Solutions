#include<iostream>
#include<algorithm>
#include<vector>    
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int total_time_solving=0;
    int minutes_in_four_hours=240;
    int number_of_problems_solved=0;
    while (number_of_problems_solved<n)
    {
        number_of_problems_solved++;
        total_time_solving+=number_of_problems_solved*5;
        if (total_time_solving+k<=240 )
        {
            continue;
        }
        else
        {
            number_of_problems_solved--;
            break;
        }

    }

    cout<<number_of_problems_solved<<endl;
    return 0;

}