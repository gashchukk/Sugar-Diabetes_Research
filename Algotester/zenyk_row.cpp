#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    string row;
    cin >> row;
    string name;
    cin >> name;
    char a;

    vector<char> rvec;
    for (char c: row) {
        a = c;
        rvec.push_back(a);
    }
    vector<char> nvec;
    for (char c: name) {
        a = c;
        nvec.push_back(a);
    }
    int numA = 0, numB = 0, numC = 0, numD = 0;
    for (int i = 0; i < row.size(); i++) {
        if (rvec[i] == 'A')
            numA++;
        else if (rvec[i] == 'B')
            numB++;
        else if (rvec[i] == 'C')
            numC++;
        else if (rvec[i] == 'D')
            numD++;
    }
    int nameA = 0, nameB = 0, nameC = 0, nameD = 0;
    for (int i = 0; i < name.size(); i++) {
        if (nvec[i] == 'A')
            nameA++;
        else if (nvec[i] == 'B')
            nameB++;
        else if (nvec[i] == 'C')
            nameC++;
        else if (nvec[i] == 'D')
            nameD++;
    }
    if ((nameA == numA / 2 || nameA == numA / 2 + 1)
        && (nameB == numB / 2 || nameB == numB / 2 + 1)
        && (nameC == numC / 2 || nameC == numC / 2 + 1)
        && (nameD == numD / 2 || nameD == numD / 2 + 1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

