#include<bits/stdc++.h>
using namespace std;



int frog(long long int arr[],long long int n,vector<long long int>&t)
{
   if(n==0)
   {
     return 0;
   }
   if(t[n]!=-1)
   {
     return t[n];
   }  
   long long int left = abs(arr[n]-arr[n-1])+frog(arr,n-1,t);
   long long int right = INT_MAX;
   if(n>1)
   {
     right = abs(arr[n]-arr[n-2])+frog(arr,n-2,t);
   }
   return(t[n]=min(left,right));
}  
  
   

int main()
{
  
  long long int N;
  cin>>N;
  vector<long long int>t(N+1,-1);
  
  long long int arr[N];
  for(long long int i=0;i<N;i++)
  {
    cin>>arr[i];
  }
  cout<<(frog(arr,N-1,t));
  return 0;
}  