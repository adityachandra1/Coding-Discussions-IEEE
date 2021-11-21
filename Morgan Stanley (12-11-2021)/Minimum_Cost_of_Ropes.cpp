<<<<<<< HEAD:Morgan Stanley (12-11-2021)/Minimum_Cost_of_Ropes.cpp
class Solution {
   public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        multiset<long long> s;
        long long final_cost = 0;
        for (int i = 0; i < n; i++) {
            s.insert(arr[i]);
        }
        while (s.size() >= 2) {
            auto itr = s.begin(), itr1 = ++s.begin(); 
            final_cost += *itr1 + *itr;
            s.insert(*itr1 + *itr);
            s.erase(itr); s.erase(itr1);
            if (s.size() < 2) break;
        }
        return final_cost;
    }
};
=======
class Solution {
   public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        multiset<long long> s;
        long long final_cost = 0;
        for (int i = 0; i < n; i++) {
            s.insert(arr[i]);
        }
        while (s.size() >= 2) {
            auto itr = s.begin(), itr1 = ++s.begin(); 
            final_cost += *itr1 + *itr;
            s.insert(*itr1 + *itr);
            s.erase(itr); s.erase(itr1);
            if (s.size() < 2) break;
        }
        return final_cost;
    }
};
>>>>>>> 846a33ecbac36a8c2a6a61c9f6e2eeee12c340d9:company_name(12-11-2021)/Minimum_Cost_of_Ropes.cpp
