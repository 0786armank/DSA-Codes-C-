// // Question1 
// 241. Different Ways to Add Parentheses
// Solved
// Medium
// Topics
// Companies
// Given a string expression of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. You may return the answer in any order.

// The test cases are generated such that the output values fit in a 32-bit integer and the number of different results does not exceed 104.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        // Use an unordered map for memoization
        unordered_map<string, vector<int>> memo;
        return compute(expression, memo);
    }
    
private:
    vector<int> compute(string expression, unordered_map<string, vector<int>>& memo) {
        // Check if the result is already cached
        if (memo.find(expression) != memo.end()) {
            return memo[expression];
        }
        
        vector<int> result;
        
        // Iterate through the expression to find operators
        for (int i = 0; i < expression.size(); ++i) {
            char c = expression[i];
            if (c == '+' || c == '-' || c == '*') {
                // Split the expression into left and right parts
                string leftExpr = expression.substr(0, i);
                string rightExpr = expression.substr(i + 1);
                
                // Recursively compute the result for both left and right parts
                vector<int> leftResult = compute(leftExpr, memo);
                vector<int> rightResult = compute(rightExpr, memo);
                
                // Combine the results from left and right parts using the current operator
                for (int leftVal : leftResult) {
                    for (int rightVal : rightResult) {
                        if (c == '+') {
                            result.push_back(leftVal + rightVal);
                        } else if (c == '-') {
                            result.push_back(leftVal - rightVal);
                        } else if (c == '*') {
                            result.push_back(leftVal * rightVal);
                        }
                    }
                }
            }
        }
        
        // If the result vector is empty, it means the expression is a single number
        if (result.empty()) {
            result.push_back(stoi(expression));
        }
        
        // Cache the result for this expression
        memo[expression] = result;
        return result;
    }
};