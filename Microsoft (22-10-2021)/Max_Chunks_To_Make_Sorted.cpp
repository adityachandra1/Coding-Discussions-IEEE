// Aditya Chandra
#include <bits/stdc++.h>
//temp_short
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
#define YES "YES"
#define NO "NO"

using namespace std;

int maxChunksToSorted(vi arr) {
    ll n = arr.size();
    ll chunk = 0;
    ll max_swap = -1;
    for1(n) {
        if (max_swap < arr[i]) {
            max_swap = arr[i];
        }
        if (max_swap == i) {
            chunk++;
        }
        // cout << max_swap << " " << chunk << endl;
    }
    return chunk;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // solve();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi arr(n);
        for1(n){
            cin >> arr[i];
        }
        cout << maxChunksToSorted(arr) << endl;
    }
}