#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

for (int i=0; i<str.size(); i++) {
 if (str[i]==',')
     cout << endl;
     else 
     cout <<str[i];
}
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
   
    return 0;
}
