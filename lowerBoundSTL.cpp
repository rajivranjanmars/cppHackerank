#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        std::vector<int>::iterator low = lower_bound(a.begin(), a.end(), t);

        if (a[low - a.begin()] == t)
            cout << "Yes " << (low - a.begin() + 1) << endl;
        else
            cout << "No " << (low - a.begin() + 1) << endl;
    }

    return 0;
}
