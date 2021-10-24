# Leetcode - 769. Max Chunks To Make Sorted

Link : https://leetcode.com/problems/max-chunks-to-make-sorted/

Since the elements can only range from 0 to n-1, we know the correct position of the elements.
After sorting the correct position of arr[i] should be i.

We can create a partition only if all of the subsequent integers are lesser than our max_swap distance.
If we don't get any larger element than the max_swap distance and we reach our max_swap distance, It means all of the indices can be included in that chunk.

Time Complexity : O(n)

Space Complexity : O(1)

