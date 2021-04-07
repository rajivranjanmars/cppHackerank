#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin >> n >> q;
    vector<vector<int>>v1;
    vector<int> v2;
    for(int i = 0; i <n; i++){
        int k;
        cin >> k;
        for(int j = 0; j <k; j++){
            int x;
            cin >> x;
            v2.push_back(x);
        }
        v1.push_back(v2);
        v2.clear();
    }
    vector<vector<int>>q1;
    vector<int> q2;
    for(int i = 0; i <q; i++){
        for(int j = 0; j <2;j++){
            int x;
            cin >> x;
            q2.push_back(x);
        }
        q1.push_back(q2);
        q2.clear();
    }

    for(int i = 0;i<q;i++){
        cout << q1[i][2] <<endl;
    }
    return 0;
}