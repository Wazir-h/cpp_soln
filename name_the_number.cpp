#include<bits/stdc++.h>

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define mod 1000000007

typedef long long ll;

string digame[] = {"one","two","three","four","five","six","seven","eight","nine"};
string tname[] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string fname[] = {"thousand","million","billion","trillion","quadrillion","quintillion"};
int main()
{

    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n; cin>>n;
    
    cout<<n<<'\n';
    int p = 18;

    ll temp = 0;
    int h,t,o;
    while((p >= 0) &&(n > 0))
    {
        temp = n/(ll)pow(10,p);
        // cout<<temp<<'\t';
        if(temp > 0)
        {
            h = temp/100;
            if(h > 0)
                cout<<digame[h-1]<<" hundred ";
            temp = temp%100;
            t = temp/10;
            o = temp%10;
            if(t == 0)
            {
                if(o > 0)
                    cout<<digame[o-1]<<" ";
            }
            else if(t == 1)
            {
                switch (o)
                {
                case 0:
                    cout<<"ten ";
                    break;
                case 1:
                    cout<<"eleven ";
                    break;
                case 2:
                    cout<<"twelve";
                    break;
                case 3:
                    cout<<"thirteen ";
                    break;
                case 4:
                    cout<<"fourteen ";
                    break;
                case 5:
                    cout<<"fivteen ";
                    break;
                default:
                    cout<<digame[o-1]<<"teen ";
                    break;
                }   
                    
            }
            
            else
            {
                cout<<tname[t-2]<<" ";
                if(o > 0)
                    cout<<digame[o-1]<<" ";
            }
            if(p > 0)
              cout<<fname[p/3-1]<<" ";
        }
        n = n%(ll)pow(10,p);
        p -= 3;
    }
    return 0;
}