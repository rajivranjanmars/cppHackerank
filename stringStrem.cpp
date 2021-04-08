#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str)
{

    stringstream ss(str);
    char ch;
    vector<int> st;
    int tmp;
    while (ss >> tmp)
    {
        st.push_back(tmp);
        ss >> ch;
        // Complete this function
    }
    return st;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}