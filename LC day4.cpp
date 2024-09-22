// Link:https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/submissions/1398659424/?envType=daily-question&envId=2024-09-22
// Problem:
// 440. K-th Smallest in Lexicographical Order
// Solved
// Hard
// Topics
// Companies
// Given two integers n and k, return the kth lexicographically smallest integer in the range [1, n].

 

// Example 1:

// Input: n = 13, k = 2
// Output: 10
// Explanation: The lexicographical order is [1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9], so the second smallest number is 10.
// Example 2:

// Input: n = 1, k = 1
// Output: 1
 

// Constraints:

// 1 <= k <= n <= 109


// Solution:
// class Solution {
// public:
//     long countSteps(int n, long first, long last) {
//         long steps = 0;
//         while (first <= n) {
//             steps += min((long)n + 1, last) - first;
//             first *= 10;
//             last *= 10;
//         }
//         return steps;
//     }
//     int findKthNumber(int n, int k) {
//       //This approach is giving TLE because of a lot of calculations!
//         // if(n==1){
//         //     return 1;
//         // }
//         // int ans=-1;
//         // long num=1;
//         // int i=0;
//         // while(i!=k){
//         //     ans=num;
//         //     i++;
//         //     if(num*10<=n){
//         //         num=num*10;
//         //     }
//         //     else{
//         //         if(num>=n){
//         //             num=num/10;
//         //         }
//         //         num++;
//         //         while(num%10==0){
//         //             num=num/10;
//         //         }
//         //     }
//         // }
//         // return ans;
//        int curr = 1;
//         k -= 1; // Start from the first number (1), so we decrease k by 1
        
//         while (k > 0) {
//             long steps = countSteps(n, curr, curr + 1);
//             if (steps <= k) {
//                 // Move to the next sibling
//                 curr += 1;
//                 k -= steps;
//             } else {
//                 // Move to the first child
//                 curr *= 10;
//                 k -= 1;
//             }
//         }
        
//         return curr;
//     }
// };

// Link:https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
// Problem:
//     3. Longest Substring Without Repeating Characters
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a string s, find the length of the longest 
// substring
//  without repeating characters.
// Example 1:
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

// Solution:
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int maxi=0;
//         unordered_map<char,int> mp;
//         int prev_longest=0;
//         for(int i=0;i<s.size();i++){
//             if(mp.find(s[i])!=mp.end()){
//                 prev_longest=max(mp[s[i]]+1,prev_longest);
//             }
//             mp[s[i]]=i;
//             maxi=max(maxi,i-prev_longest+1);
//         }
//         return maxi;

//     }
// };

