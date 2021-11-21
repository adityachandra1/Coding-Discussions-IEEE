## 1. Closest Stores

Link : https://discordapp.com/channels/876011519140302849/882603749846171668/911288517760536577 

A brute force approach to solving this question can be to check the distance of the house[i] for each store and push the store with the minimum distance from the house. This will give us a time complexity of n\*m. (n = number of houses, m = number of stores).

To optimize this we can sort the stores arrays and an apply binary search for each house in the stores array with the help of lowerbound/upperbound functions. Each search will take O(Log(m)) time.

Lower Bound : https://www.geeksforgeeks.org/lower_bound-in-cpp/

Time Complexity: O(m\*Log(m)) + O(n\*Log(m))

## 2. Hotels

Link : https://discordapp.com/channels/876011519140302849/882603749846171668/911288562262097970

We can use a map to count the number of occurences of each room which has a "+" in front of it. Then iterate through each element of the map and return the room with the highest count.
Since the rooms are stored in an ordered_map the, the rooms will already be in a sorted order, therefore if multiple rooms have the same count, the lexicographically smaller room will appear first.

Time Complexity : O(n) [n = number of room queries]

