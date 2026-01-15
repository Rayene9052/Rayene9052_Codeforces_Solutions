

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, s;
    cin >> n;
    
    vector<int> count(5, 0);
    for (int i = 0; i < n; i++) {
        cin >> s;
        count[s]++;
    }

    int taxis = count[4];

    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);


    // GROUPEET elli fihom 2 yetlamou maa baadhom
    taxis += count[2] / 2;
    if (count[2] % 2 == 1) {
        taxis++;
        // 1 taxi for one group of 2, can take 2 more of 1s
        count[1] = max(0, count[1] - 2);
    }

    //  Remaining groups of 1 fit 4 to a taxi
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4; 
    }

    cout << taxis << endl;
    return 0;
}

/*

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >>n;
    vector<int> groups(n);
    for (int i = 0; i<n ; i++)
    {
        cin>>groups[i];
    }
    sort(groups.begin(), groups.end());
    int taxis=0;

    int l=0, r=n-1;
    while (l<=r)
    {
        if (l==r)
        {
            taxis++;
            break;
        }
        if (groups[r]+groups[l]<=4)
        {
            l++;
        }
        r--;
        taxis++;
    }

    cout<<taxis<<endl;
    return 0;
}

*/
    /*
    while (!groups.empty())
    {
        int current_capacity=4;
        for (int i = groups.size()-1; i>=0; i--)
        {
            if (groups[i]<=current_capacity)
            {
                current_capacity-=groups[i];
                groups.erase(groups.begin()+i);
            }
        }
        taxis++;
    }
        // this approach works but is inefficient because of the erase operation in a vector , it failed on bigger inputs due to time limit exceeded (e sabr)
        */