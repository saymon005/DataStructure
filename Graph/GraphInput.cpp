#include<bits/stdc++.h>
using namespace std;
vector<int>saymon[10];
int main()
{
    int sp,ep,i,j;
    for(int i = 1; i<=4;i++)
    {
        cin>>sp>>ep;
        saymon[sp].push_back(ep);
    }
    cout<<saymon[1].size()<<endl;
    for(i = 1; i<=4; i++)
    {
        cout<<"Node "<<i<<" is connect with"<<endl;
        for(j=0; j<saymon[i].size(); j++)
        {
            cout<<saymon[i][j]<<endl;
        }
    }
    return 0;
}
