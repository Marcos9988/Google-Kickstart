#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).end()
#define pb push_back
#define pf push_front
#define fori(i, a, n) for(int i = a; i < n; ++i)
#define MAX(x) (*max_element(all(x)))
#define MIN(x) (*min_element(all(x)))
#define sortarr(a,n) sort(a, a+n)
#define sortvec(V) sort(all(V))

typedef vector<int> V;
typedef pair<int , int> pairi;
typedef set<int> seti;
typedef deque<int> deqi;

const int MOD = 1e9+7;
const int INF = 1e9+8;
const double pi = 3.14159265359;

template <class T>
T fac(T n)      // template function to find factorial of a number
{ 
    T res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
}
template<class T>
T lcm(T a, T b)     //template function to find lcm of two numbers 
{
    return (a * b) / __gcd(a,b);
}
template<class T>
T digitsum(T x)
{
    T sum = 0;
    while(x)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}
string tostring(int a)      //converting integer into a string
{
    string ans;
    while(a){
        ans += char(a % 10 + '0');
        a /= 10;
    }
    return ans;
}
void nPermute(string str, long int n)  //function to find nth  lexi string
{ 
    sort(all(str));
    long int i = 1; 
    do {
        if (i == n) 
            break; 
  
        i++; 
    } while (next_permutation(str.begin(), str.end())); 
    cout<<str<<endl;
} 
vector<int> factors(int n) 
{ 
    vector<int> f; 
    for(int x = 2; x*x <= n; x++) 
    { 
        while (n%x == 0) 
        { 
            f.push_back(x); 
            n /= x; 
        } 
    } 
    if (n > 1) f.push_back(n); 
    return f; 
}
bool prime(int n) 
{ 
    if (n < 2)
        return false;
    for(int x = 2; x*x <= n; x++) 
        if (n%x == 0) 
            return false; 
    return true; 
}
tuple<int, int, int> Gcd(int a, int b)      //extended Euclids Algorithm
{
    if(b == 0)
        return {1, 0, a};
    else
    {
        int x, y, g;
        tie(x, y, g) = Gcd(b, a%b);
        return {y, x - (a/b)*y, g};
    }
}
template<class T>       // modular Exponentiation x^n mod m = x^(n mod (m - 1)) mod m : if n  is very large;
T modpow(T x, T n, T m)
{
    if(n == 0)  return 1 % m;
    T u = modpow(x, n/2, m);
    u = (u * u) % m;
    if(n % 2 == 1) u = (u * x) % m;
    return u;
}
void solve()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(0);
    int t;
    cin >> t;
    int x = 0;
    while(x != t){
        cout<<"Case #"<< x + 1<<": ";
        solve();
        x ++ ;
    }
}