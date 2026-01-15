#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    int total=0;
    do {
        cin >> k >> n >> w;
    } while (!(k >= 1 && w >= 1 && k <= 1000 && w <= 1000 && n >= 0 && n <= 1000000000));
    int slaf;
    for(int i=1;i<=w;i++)
    {
        total+=k*i;
    }
    slaf=total-n;
    if (slaf>0)
         {cout<<slaf;}
    else {cout<<0;}
    return 0;
}

