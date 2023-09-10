#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s,a;
    cin>>s;
    vector<int>v;
    for (int i=0; i<s; i++) {
        cin>>a;
        v.push_back(a);
    }
    for (int i=v.size()-1; i>=0; i--) {
        cout<<v[i]<<" ";
    }
    return 0;
}
