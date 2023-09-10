#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
     int i = 0;
     int arr[32];
    while (n > 0) {
 
        // storing remainder in binary array
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    int count=0,max=0;
     for (int j = i - 1; j >= 0; j--)
     {
         if (arr[j]==0) {
            count=0;
         }
         else{
             count++;
             if (max<count) {
               max=count;
             }
             
         }
     }
     cout<<max;
     return 0;    
}
   


string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
