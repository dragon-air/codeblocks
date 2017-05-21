#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el cout<<endl;

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
   int n,q,ans=0;
   cin>>n>>q;
   for(int i=0;i<n;i++ )
     {
cin>>val;
mset.insert(val);
   }


  //print();

multiset<long long>:: iterator it1,it2;
it2=mset.begin();

while(q-- ){
ans=0;
cin>>val;
it1=mset.lower_bound(val);
//cout<<*it1;
//el
if(it1!=mset.begin()){
   // it1=it1-1;
    //prev(it1,1);

    auto pos =distance(it1,mset.end());
    ans = pos;
  //  cout<<ans;
    //el
    it1--;
    //cout<<"prev   "<<*it1;
    //el
    pos = distance(mset.begin(),it1);
    int avail = pos;
    int req = val-*it1;
    //cout<<"avail  "<<avail;
    //el
    //cout<<"req    "<<req;
    //el
    while(avail>=req && it1!=mset.begin() && avail>=1){
        ans++;
        avail = avail - req;
         it1--;
          req = val - *it1;
      //  cout<<"avail  "<<avail;
        //el
       // cout<<"req  "<<req;
         //el
        //cout<<"it1  "<<*it1;
      // el
    }
}

cout<<ans;
el
//auto pos = distance(mset.begin(), it1);

//cout<<pos;



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
