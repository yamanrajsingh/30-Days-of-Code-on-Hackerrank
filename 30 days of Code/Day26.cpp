#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d,m,y;
    cin>>d>>m>>y; 
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int fine=0;
    if (y > y1){
         fine = 10000;
    }
   else if( y == y1 and m > m1)
   {
       fine = 500 * (m - m1);
   }
    
   else if( y == y1 and m == m1 and d > d1)
   {
        fine = 15 * (d - d1);
   }
     cout<<fine;
    return 0;
}
