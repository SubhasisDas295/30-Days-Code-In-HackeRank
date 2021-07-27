#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    { 
        string ptr;
        cin>> ptr;
    for(j=0;j<ptr.length();j++)
    {
        if(j%2==0)
        {
        cout<<ptr[j];
        }
    }
    cout<<" ";
    for(j=0;j<ptr.length();j++)
    {
        if(j%2!=0)
        {
        cout<<ptr[j];
        }
    }
    cout<<endl;
    }

    return 0;
}
