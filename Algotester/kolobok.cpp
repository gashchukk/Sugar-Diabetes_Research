#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <iterator>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    transform(str.begin(),str.end(),str.begin(),
              [](char c)->char { return tolower(c); });
    istringstream iss(str);
    set<string> words((istream_iterator<string>(iss)), istream_iterator<string>());
    cout<<words.size();
    return 0;
}


