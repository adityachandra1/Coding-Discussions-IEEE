# Leetcode - 769. Max Chunks To Make Sorted

Link : https://leetcode.com/problems/max-chunks-to-make-sorted/

Since the elements can only range from 0 to n-1, we know the correct position of the elements.
After sorting the correct position of arr[i] should be i.

We can create a partition only if all of the subsequent integers are lesser than our max_swap distance.
If we don't get any larger element than the max_swap distance and we reach our max_swap distance, It means all of the indices can be included in that chunk.

Time Complexity : O(n)

Space Complexity : O(1)


# N Cranes Problem from Microsoft OA

Link: https://www.chegg.com/homework-help/questions-and-answers/n-cranes-numbered-0-n-1-arranged-line-along-road-road-begins-position-0-k-th-crane-located-q83338199

Used vector of a pair of ranges for each crane. And compared the intervals for each crane after sorting it. (the start of [i+1]th range to the end of [ith] range).

Time Complexity: O(A.size())

Space Complexity: O(A.size())
