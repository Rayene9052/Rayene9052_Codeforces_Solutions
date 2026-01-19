#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int x, y, z, t;
    cin>>x>>y>>z>>t;
    vector<int> results;
    results.push_back(x);
    results.push_back(y);
    results.push_back(z);
    results.push_back(t);
    sort(results.begin(), results.end());
    int maximum=results[3];
    int a=maximum - results[0];
    int b=maximum - results[1];
    int c=maximum - results[2];

    cout<<a<<" "<<b<<" "<<c<<endl;
}