#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    
 long n;
 cin>>n;
 map<string,long>pb;
 string name;
 long pn;
 for (long i=0; i<n; i++) {
     cin>>name>>pn;
     pb[name]=pn;
 }
 while(cin>>name){
     if (pb.find(name)!=pb.end()) {
         cout<<name<<"="<<pb.find(name)->second<<endl;
     
     }
     else{
         cout<<"Not found"<<endl;
     }
 }
    return 0;
}
