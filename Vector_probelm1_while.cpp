#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int i=0,tab=0;,sum=0;
	cout<<"Enter the elements and Enter -1 to stop\n";
	while(tab != -1){
		cin>>tab;
		if(tab != -1)
{
			v.push_back(tab);
		sum=sum+v[i];
		if((v[i]%2)==0)
		{
			v[i]=1;
		}
		else
		{
			v[i]=-1;
		}
		i++;
				}
}	int size = v.size();
	cout<<sum;
	for(int j=0;j<size;j++){
		cout<<v[j]<<"\n"
		;
	}
	return 0;
}

