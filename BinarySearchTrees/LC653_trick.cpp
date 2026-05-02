/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    unordered_set<int> set;

public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if (set.count(k - root->val)) return true;
        set.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};

// READ BELOW FOR UNDERSTANDING

// This looks confusing at first, but it’s actually a **very clever trick using a HashSet (unordered_set)** to solve **Two Sum IV - Input is a BST**.

// Let’s break it down in your style 👇

// ---

// ## 🧠 Core Idea (Same as Two Sum Array)

// You already know **Two Sum in arrays**, right?

// 👉 For every number `x`, you check:

// ```
// Is (target - x) already seen?
// ```

// If yes → ✅ pair found
// If no → store `x` and continue

// ---

// ## 🌳 Now Apply This to a Tree

// Tree traversal = just visiting nodes one by one.

// At each node:

// ```
// current value = root->val
// needed value = k - root->val
// ```

// ---

// ## 🔍 Step-by-step Code Breakdown

// ```cpp
// unordered_set<int> set;
// ```

// 👉 This stores all values we've already visited.

// ---

// ```cpp
// if (!root) return false;
// ```

// 👉 Base case: no node → no pair

// ---

// ```cpp
// if (set.count(k - root->val)) return true;
// ```

// 💥 THIS IS THE MAGIC LINE

// You're asking:

// > "Have I already seen a number such that
// > current + that number = k ?"

// If yes → pair found → return true

// ---

// ```cpp
// set.insert(root->val);
// ```

// 👉 If not found, store current value for future nodes

// ---

// ```cpp
// return findTarget(root->left, k) || findTarget(root->right, k);
// ```

// 👉 Recursively check left and right subtree

// ---

// ## ⚡ Dry Run Example

// Tree:

// ```
//      5
//     / \
//    3   6
//   / \   \
//  2   4   7
// ```

// Target = 9

// ---

// ### Step 1: Node = 5

// * Need: `9 - 5 = 4`
// * Set = {}
// * ❌ Not found
// * Insert 5 → `{5}`

// ---

// ### Step 2: Node = 3

// * Need: `9 - 3 = 6`
// * Set = {5}
// * ❌ Not found
// * Insert 3 → `{5, 3}`

// ---

// ### Step 3: Node = 2

// * Need: `9 - 2 = 7`
// * Set = {5, 3}
// * ❌ Not found
// * Insert 2 → `{5, 3, 2}`

// ---

// ### Step 4: Node = 4

// * Need: `9 - 4 = 5`
// * Set = {5, 3, 2}
// * ✅ FOUND 5

// 💥 RETURN TRUE

// ---

// ## 🧩 Why This Works

// Because:

// * You are checking **previous nodes** while traversing
// * Order doesn’t matter
// * Tree is just a structure → logic same as array

// ---

// ## ⏱ Time & Space Complexity

// * Time: **O(n)** → visit each node once
// * Space: **O(n)** → storing values in set

// ---

// ## 🧠 Important Insight

// 👉 This solution **does NOT use BST property at all**

// Even if it's just a normal binary tree, it still works.

// ---

// ## 💬 Intuition in One Line

// > “While walking through the tree, keep asking:
// > *Have I already seen the number I need to complete k?*”



