#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void prime(int a)
{
    if(a==1)
        {
            cout<<"Not prime"<<endl;
            return ;
        }
            for(int i=2;i<=sqrt(a);i++)
            {
                if(a%i==0)
                {
                    cout<<"Not prime"<<endl;
                    return;
                }
            }
              cout<<"Prime"<<endl;
              return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    for(int j=0;j<t;j++) 
    {
        int a;
        cin>>a;
      prime(a);
    }
    return 0;
}
