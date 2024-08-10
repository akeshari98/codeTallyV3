#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<int>l(n),r(n);
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }
        string ans="NO";
        if(l[0]>=s)
        {
            ans="YES";
        }
        else if((m-r[n-1])>=s)
        {
            ans="YES";
        }

        else{
            for(int i=1;i<n;i++)
            {
                if((l[i]-r[i-1])>=s)
                {
                    ans="YES";
                    break;
                }
                else ans="NO";
            }
        
        cout<<ans<<endl;
   
    }
}
}