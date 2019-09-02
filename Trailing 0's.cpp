#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i=1,sum=0;
cin>>n;
while(1)
{
if( (n/5^i)<1 )
break;
else
{sum+=n/pow(5,i);i++;
}}
cout<<sum;


return 0;

}

