1. Minimum Cost of ropes 

Link: https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

To connect the ropes with minimum cost we need to combine the two smallest ropes in the array. 

A brute force approach can be sorting the array at every iteration, and adding the sum of two minimum elements to the cost. The time complexity to this approach will be n*nlogn.

We'll follow the same idea stated above, but instead use a multiset to optimise it. It'll insert/deleted the elements in the sorted order, so we won't need to sort the array in every iteration.(Time complexity for insertion/deletion in a multiset is O(logn).
Optimised Approach: Replace the two smallest elements in the set with their sum at every iteration and keep adding the sum to the final_cost.


Multiset : https://www.geeksforgeeks.org/multiset-in-cpp-stl/


Time Complexity: O(nLogn);

2. Longest Valid Parentheses

Link: https://leetcode.com/problems/longest-valid-parentheses/

Approach: use stacks