// This approach takes space 

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums)
            st.insert(x);

        int ans = 1;

        while (st.count(ans))
            ans++;

        return ans;
    }
};

// true optimal approach
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[i] != nums[nums[i] - 1]) {

                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1)
                return i + 1;
        }

        return n + 1;
    }
};

// Intution

// Suppose I give you

// [3,4,-1,1]

// and I say:

// "Every number should sit in its own house."

// The houses are

// House 1
// House 2
// House 3
// House 4

// Which house should 3 live in?

// House 3.

// Which house should 1 live in?

// House 1.

// Which house should 4 live in?

// House 4.

// That's all the algorithm is trying to do.

// Now computers don't have houses.

// They have indices.

// So we make the rule:

// House 1 = index 0
// House 2 = index 1
// House 3 = index 2
// House 4 = index 3

// Notice the pattern?

// House x
// ↓

// Index x-1

// That's where x-1 comes from. It isn't magic.

// Now look at the array.

// Index : 0 1 2 3
// Value : 3 4 -1 1

// Ask only one question.

// Is 3 in its house?

// No.

// 3 belongs at index 2.

// So move it there.

// After swapping,

// -1 4 3 1

// Now look again at index 0.

// There is -1.

// Does -1 have a house?

// No.

// Leave it.

// Move to the next index.

// At index 1,

// 4

// Is it in its house?

// No.

// 4 belongs at index 3.

// Move it.

// -1 1 3 4

// Now index 1 has 1.

// Is it in its house?

// No.

// 1 belongs at index 0.

// Move it.

// 1 -1 3 4

// Done.

// Now every valid number is sitting in its own house.

// Finally, check each house.

// House 1 -> has 1 ✅
// House 2 -> has -1 ❌

// So 2 is missing.