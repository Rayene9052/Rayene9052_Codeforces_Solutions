#include <iostream>
using namespace std;

int main() {
    int x;
    int nbr;
    do {
        cin>>x;
    } while (x < 1 || x > 1000000);
    nbr=x/5+ (x % 5 != 0 ? 1 : 0);
    cout<<nbr;


    return 0;
}
