#include<bits/stdc++.h>

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define mod 1000000007

typedef long long ll;

int C(int n, int r)
{
    if(r > n/2)
        r = n-r ;
    
    int ans = 1;
    for(int i = 0 ; i < r ; i++)
    {
        if((n-i)%(i+1) == 0)
            ans *= (n-i)/(i+1);
        else    
            ans = (ans/(i+1))*(n-i);
    }

    return ans;
}


int main()
{

    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;  cin>>n;

    cout<<1<<'\n';
    for(int i = 1 ; i <= n-1 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<C(i,j)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}