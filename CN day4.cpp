// Link: https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
// Problem:
// There is a river which flows in one direction. One day, the river has 'N' number of fishes. You are given an array 'FISHES' of integers representing the size of 'N' fishes. The fishes are present in the river from left to right(0th index represents the size of the leftmost fish). As the river flows from left to right so the fishes also swim from left to right. The fishes are of different sizes and have different speeds. The larger fishes are faster than the smaller fishes. Also, larger fishes can eat smaller fishes but can’t eat fishes of the same size.

// Can you find the number of fishes that survive at the end of the day?

// Example:
// Let the size of fishes present in the river from left to right be{ 4, 2, 3, 1, 5 }.

// 1. As fish 4 is faster and bigger than fish 2, so fish 4 will eat fish 2.
//     Remaining fishes: { 4, 3, 1, 5 }

// 2. As fish 3 is faster and bigger than fish 1, so fish 3 will eat fish 1.
//     Remaining fishes: { 4, 3, 5 }

// 3. As fish 4 is faster and bigger than fish 3, so fish 4 will eat fish 3.
//     Remaining fishes: { 4, 5 }

// Now fish 5 cannot eat fish 4, as fish 5 is faster than fish 4 and they swim from left to right. Thus, fish 4 will never reach fish 5.

// Finally, we are left with only 2 fishes.
// #include <bits/stdc++.h> 
// int fishEater(vector<int> &fishes) {
//     // Write your code here.
//     stack<int> st;
//     st.push(fishes[0]);
//     for(int i=1;i<fishes.size();i++){
//         if(!st.empty() && st.top()<=fishes[i]){
//             st.push(fishes[i]);
//         }
//     }
//     return st.size();
// }



//Problem(medium)
// Link:https://www.naukri.com/code360/problem-of-the-day/moderate?leftPanelTabValue=PROBLEM
// Problem statement
// Send feedback
// Given a string input of length n, find the length of the longest substring without repeating characters i.e return a substring that does not have any repeating characters.

// Substring is the continuous sub-part of the string formed by removing zero or more characters from both ends.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
//  1<= n <=10^5

// Time Limit: 1 sec
// Sample Input 1:
//  abcabcbb 
// Sample Output1:
//  3
// Explanation For Sample Input 1:
// Substring "abc" has no repeating character with the length of 3.
// Sample Input 2:
//  aaaa
// Sample Output 2:
// 1

// Solution:
//     #include <bits/stdc++.h> 
// int uniqueSubstrings(string input)
// {
//     int maxi=0;
//     unordered_map<char,int> mp;
//     int left=0;
//     int n=input.size();
//     for(int right=0;right<n;right++){
//         if(mp.find(input[right])!=mp.end()){
//             left=max(mp[input[right]]+1,left);
//         }
//         mp[input[right]]=right;
//         maxi=max(maxi,right-left+1);
//     }  
//     return maxi;
// }