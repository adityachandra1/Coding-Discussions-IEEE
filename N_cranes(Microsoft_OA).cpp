// Aditya Chandra
#include <bits/stdc++.h>
// temp_short
#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto& x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second
#define YES "YES"
#define NO "NO"

using namespace std;

bool solution(vi A, vi P, ll B, ll E) {
    ll n = A.size();
    vector<pair<ll, ll>> ranges(n);
    for1(n){
        ranges[i].ff = P[i] - A[i];
        ranges[i].ss = P[i] + A[i];
    }
    sort(ranges.begin(), ranges.end());
    ranges.pb({INT_MAX, INT_MAX});
    ll start = min(B, E);
    ll end = max(B, E);
    ll loc = start;
    ll j = 0;
    for1(n){
        if(start >= ranges[i].ff && start <= ranges[i].ss){
            j = i;
        } 
    }
    if(start >= ranges[j].ff && end <= ranges[j].ss){
        return true;
    }
    while(loc < end){
            if(ranges[j+1].ff <= ranges[j].ss){
                loc = ranges[j + 1].ss;
            }else{
                return false;
            }
            j++;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // solve();
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi A(n), P(n);
        ll B, E;
        for1(n){
            cin >> A[i];
        }
        for1(n){
            cin >> P[i];
        }
        cin >> B >> E;

        cout << solution(A, P, B, E) << endl;
    }
}