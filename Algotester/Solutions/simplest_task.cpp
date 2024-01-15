#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    int jn, br;
    cin >> jn >> br;

    vector<int> jnm(jn);
    vector<int> brm(br);
    for (int i = 0; i < jn; i++) {
        cin >> jnm[i];
    }
    for (int j = 0; j < br; j++) {
        cin >> brm[j];
    }
    set<int>jn_set;
    for(int i=0;i<jn;i++)
        jn_set.emplace(jnm[i]);
    set<int>br_set;
    for(int i=0;i<br;i++)
        br_set.emplace(brm[i]);
    int count=0;

    for(auto i :jn_set){
        for(auto j : br_set)
            if(j==i)
                count++;
    }


    set<int>both_set;
    for(int i=0;i<jn;i++)
        both_set.emplace(jnm[i]);
    for(int i=0;i<br;i++)
        both_set.emplace(brm[i]);


    int res1=both_set.size();
    int res2=count;
    cout<<res1<<" "<<res2;
    return 0;
}

