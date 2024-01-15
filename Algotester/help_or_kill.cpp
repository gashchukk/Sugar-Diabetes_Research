#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string line;
    string  tlt("TOILET");
    cin >> line;
    int count = 0;
    for (int i = 0; i < line.size(); i++)
        if (line[i] == tlt[0])
            if (line.substr(i, 6) == tlt)
            {
                count++;
                i += tlt.length() - 1;
            }

    if (count >= n)
        cout << "YES";
    else if(count<n)
        cout << "NO";
    return 0;
}

