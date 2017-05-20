#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr;
multiset<ll> mset;
ll val;

void print()
{  multiset<long long>:: iterator it;
    cout<<"printing arr"<<endl;
    for(it=mset.begin();it!=mset.end();it++ )
    cout<<*it<<" ";
    cout<<endl;
}

void solve(void)
{

   arr.clear();
   mset.clear();
   int n,q;
   cin>>n>>q;
   for(int i=0;i<n;i++ )
     {
cin>>val;
mset.insert(val);
   }


   print();

multiset<long long>:: iterator it1,it2;
it2=mset.begin();

while(q-- ){
cout<<"gfreg"<<endl;
cin>>val;
it1 = mset.upper_bound(val);
cout<<*it1;

cout<<distance(it1,it2);
}



}


int main()
{
   int t;
   cin>>t;
   while(t--){
   solve()  ;}
   return 0;
}
