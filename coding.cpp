#include<bits/stdc++.h>
using namespace std;




int arr[10001];



void solve(void)
{

   memset(arr,0,sizeof(arr));

   int t;
   cin >>t ;
   while(t--){
   int n;int p;
   cin>>n>>p;

   for(int i=0;i<n;i++ )
    cin>>arr[i];

   int countMax=0;
   int maxSum=0;

   int left,right ;

   for(left=0;left<n;left++)
   {
       for(right=left;right<n;right++)
       {
           int sum=0;

           for(int i=left;i<=right;i++ )
              sum=(sum+arr[i])%p;

           if(sum>maxSum)
              maxSum=sum,countMax=0;

            if(sum==maxSum)
                countMax+=1;

       }
   }

   cout<<maxSum<<" "<<countMax<<endl;
   }


}


int main()
{
   solve()  ;
   return 0;
}
