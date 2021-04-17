#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    for (int i = 0; i < q; i++)
    {
        int x, a;
        cin >> x >> a;
        switch (x)
        {
        case 1:
            s.insert(a);
            break;
        case 2:
            s.erase(a);
            break;
        case 3:
            int l = s.size();
            set<int>::iterator itr = s.find(a);
            if ((itr != s.end()))
                cout << "Yes " << endl;
            else
                cout << "No " << endl;
            break;
        }
    }
    return 0;
}
