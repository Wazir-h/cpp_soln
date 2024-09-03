#include<bits/stdc++.h>
using namespace std;

string add(string a, string b)
{

  int nb = b.length(), na = a.length();
  if(nb > na)
  {
    swap(a,b);
    swap(na,nb);
  }
  string d = "";
  int x = 0, c= 0;
  for(int i = 0 ; i < nb ; i++)
  {
    x = (int)(b[nb-1-i] - '0') + (int)(a[na-1 -i] - '0') + c;
    c = x/10;
    d = (char)(x%10 + '0') + d;
  }
  for(int i = nb ; i < na ; i++)
  {
    x = (int)(a[na -1 -i] - '0') + c;
    c = x/10;
    d = (char)(x%10 + '0') + d;
  }
  if(c)
    d = (char)(c + '0') + d;
  
  return d;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
  #endif

  string n1, n2;
  cin>>n1>>n2;

  cout<<add(n1,n2)<<'\n';
  return 0;
}
