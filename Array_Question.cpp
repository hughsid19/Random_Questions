#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int n;
	float y;
	int test1=0;
	int test2=0;
	int sum1=0;
	int sum2=0;
	
	cout<<"Enter the size of Array 1 which is equal to Array 2\n ";
	cin>>y;
	n=y;
	int A[n],B[n];
	cout<<"Enter the Elements of Array 1\n";
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"Enter the Elements of Array 2\n";
	for(int i=0;i<n;i++){
		cin>>B[i];
	}
	for(int i=0;i<n;i++){
	    if(B[i]<=A[i])
	       {
	       	test1++;
	      // 	cout<<test1;
			   }	
	}
	for(int i=0;i<n;i=i+2){
	    sum1=A[i]-B[i];
	    sum2=A[i+1]-B[i+1];
	    if(sum1==sum2){
	    	test2++;
	     //	cout<<test2<<"\n";
		              }
		}
		
		float temp;
		temp=(y/2);
		float res;
		res=ceil(temp);
		//cout<<res<<"\n";
		
		if((test2>=res) && (test1>0))
			cout<<"true";
			else
			cout<<"False";
		
		
 return(0);		

}

