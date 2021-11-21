//Aditya Chandra
#include <bits/stdc++.h>
//basic snip
using namespace std;

vector<int> closestStore(vector<int> stores, vector<int> houses) {
    vector<int> closestStores;
    sort(stores.begin(), stores.end());
    int total_houses = houses.size();

    for (int i = 0; i < total_houses; i++) {
        auto higher = lower_bound(stores.begin(), stores.end(), houses[i]);
        auto lower = higher - 1;
        int distance1 = abs(houses[i] - *higher);
        int distance2 = abs(houses[i] - *lower);
        // cout << *higher << " " << distance1 << " " << *lower << " " << distance2 << endl;
        if (distance1 < distance2) {
            closestStores.push_back(*higher);
        } else {
            closestStores.push_back(*lower);
        }
    }
    return closestStores;
}

int main() {
    int total_houses, total_stores;
    cin >> total_houses >> total_stores;
    vector<int> houses(total_houses), stores(total_stores);

    for (int i = 0; i < total_houses; i++) {
        cin >> houses[i];
    }
    for (int i = 0; i < total_stores; i++) {
        cin >> stores[i];
    }

    vector<int> closestStores = closestStore(stores, houses);
    for (int i = 0; i < closestStores.size(); i++) {
        cout << closestStores[i] << " ";
    }
}