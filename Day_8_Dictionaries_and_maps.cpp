#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int  i,n;
    cin>>n;
    string name,number,key;
    map<string,string>phone_dir;
    for(i=0;i<n;i++)
    {
        cin>>name>>number;
        phone_dir.insert(pair<string,string>(name,number)); 
    }
    while(cin>>key)
    {
       if(phone_dir.find(key)!=phone_dir.end())
       {
           cout<<key<<"="<<phone_dir.find(key)->second<<endl;
       }
       else cout<<"Not found"<<endl;
    }
    return 0;
}
