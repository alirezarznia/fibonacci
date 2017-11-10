#include 	<cstdio>
#include	<iostream>
#include	<cmath>
#include 	<cstring>
#include 	<cstdlib>
#include 	<vector>
#include 	<string>
#include 	<algorithm>
#include 	<queue>
#include 	<deque>
#include 	<set>
#include 	<stack>
#include 	<map>
#include 	<sstream>
#include 	<ctime>
#include	<iomanip>
#include 	<functional>

#define 	Time 		printf("\nTime : %.3lf s.\n", clock()*1.0/CLOCKS_PER_SEC)
#define 	For(J,R,K) 	for(ll J=R;J<K;++J)
#define 	Rep(I,N) 	For(I,0,N)
#define 	MP 			make_pair
#define 	ALL(X) 		(X).begin(),(X).end()
#define 	SF 			scanf
#define 	PF 			printf
#define 	pii 		pair<long long,long long>
#define 	pdd 		pair<double , double>
#define 	Sort(v) 	sort(ALL(v))
#define 	Test 		freopen("a.in","r",stdin)
#define 	Testout 	freopen("a.out","w",stdout)
#define 	pb 			push_back
#define 	Set(a,n) 	memset(a,n,sizeof(a))
#define 	MAXN 		100000+99
#define 	EPS 		1e-15
#define 	inf 		1ll<<62

typedef long long ll;

using namespace std;
ll F[1001];
ll fibo(ll n)
{
    if(n==1 || n==2)
        return 1;
    if(F[n] != -1)
        return F[n];
    ll k = (n & 1 ) ? (n+1)/2 : n/2;
    return F[n]= (n & 1) ? (fibo(k)*fibo(k) + fibo(k-1)*fibo(k-1))% 1000000007: ((2*fibo(k-1) + fibo(k)) *fibo(k))% 1000000007;
}
int main()
{
 ll t;
 cin>>t;
 Set(F,-1);
 while(t--)
 {
    ll n ;
    cin>>n;
    cout<<fibo(n)<<endl;
 }
 return 0;
}
