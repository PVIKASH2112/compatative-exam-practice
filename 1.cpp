#include<iostream>
#include<bits/stdc++>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int a[n],i,j;
	int t;
	string s1,s2,s3,s4;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    	    s3=to_string(a[j]);
			s4=to_string(a[j+1]);
			s1=s3+s4;			
    		s2=s4+s3;
    		
    	if(s1+s2<s2+s1)
    	{
    		
    		t=a[j];
    		a[j]=a[j+1];
    		a[j+1]=t;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	getch();
	return 0;
}
