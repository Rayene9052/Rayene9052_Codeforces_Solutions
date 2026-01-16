#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int number_of_squares=n*m;
    while (n>1 && m>1){
        n--;
        m--;
        number_of_squares+=n*m;
        cout<<number_of_squares<<endl;
        cout<<n<<" "<<m<<endl;
    }
    cout<<number_of_squares;
   


}