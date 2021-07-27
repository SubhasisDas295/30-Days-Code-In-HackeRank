#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a_size;
    cin>>a_size;
    vector<int> vect(a_size);
    for(int i=0;i<a_size;i++)
    {
        cin>>vect[i];
    }
    reverse(vect.begin(),vect.end());
    for(int i=0;i<a_size;i++)
    {
        cout<<vect[i]<<" ";
    }
    return 0;
}
