#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long x1, y1, x2, y2;
    long long x21, y21, x22, y22;
    long long s;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x21 >> y21 >> x22 >> y22;

    long long max_x=max(x1,x21);
    long long max_y=max(y1,y21);
    long long min_x=min(x2,x22);
    long long min_y=min(y2,y22);

    long long xx=min_x-max_x;
    long long yy=min_y-max_y;
    s=xx*yy;
    cout<<s;
    return 0;
}
