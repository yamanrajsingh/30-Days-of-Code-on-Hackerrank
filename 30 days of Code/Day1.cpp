#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
  int j;
  cin>>j;
  cout<<(i+j)<<endl;;
  double e;
  cin>>e;
  double sum= d+e;
  cout << fixed << setprecision(1) << sum<<endl;
  string s1;
  getline(cin,s1);
  getline(cin,s1);
  cout<<s+s1;
    return 0;
}