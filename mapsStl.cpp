#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    map<string, int> m;
    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        string str;
        cin >> str;
        int a;

        switch (type)
        {
        case 1:
            cin >> a;
            a = a + m[str];
            m.erase(str);
            m.insert(make_pair(str, a));

            break;
        case 2:

            m.erase(str);
            break;
        case 3:

            cout << m[str] << endl;
        }
    }

    return 0;
}
