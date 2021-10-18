#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int m;
        cin>>m;

        long long int a[m];   long long int temp=0;  long long int c=0;
        for(long long int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        for(long long int i=0;i<m;i++)
        {
            temp=n-a[i];

            n=n-a[i];


            if(n>=0)
            {
                c++;

            }



        } cout<<c<<endl;
    }
}

