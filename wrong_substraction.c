#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    int k,n;
    do {
        cin >> n >> k;
    } while (!(n >= 2 && n <= 1000000000 && k >= 1 && k <= 50));
    int result=n;
    for (int i ; i<=k;i++)
    {

        if (result%10!=0)
        {
            result=result-1;
        }
        else { result/=10;}

    }
    cout<<result;


}
