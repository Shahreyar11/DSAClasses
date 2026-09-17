class Solution {
public:
    const long long MOD = 1000000007;
    int countDig(long long n){
        int count = 0;
        while(n){
            n = n/10;
            count++;
        }
        return count;
    }
    int sumDecoded(vector<long long>& nums) {
        long long res = 0;
        for(int i = 0; i<nums.size(); i++){
            long long curr = nums[i];
            long long width = curr % 10;
            long long d = floor(curr /10);
            int digits = countDig(d);
            int num_y = digits-width;
            long long y = 0;
            while(num_y){
                long long dig = d % 10;
                y = y*10 + dig;
                d = d/10;
            }
            long long x = d;
            res += pow(x,y);
        }
        return res;
    }
};


class Solution {
public:

    const long long MOD = 1000000007;

    int countDig(long long n) {
        int count = 0;

        while (n) {
            n = n / 10;
            count++;
        }

        return count;
    }

    long long power(long long x, long long y) {
        long long ans = 1;

        while (y > 0) {

            if (y % 2 == 1) {
                ans = (ans * x) % MOD;
            }

            x = (x * x) % MOD;
            y = y / 2;
        }

        return ans;
    }

    int sumDecoded(vector<long long>& nums) {

        long long res = 0;

        for (int i = 0; i < nums.size(); i++) {

            long long curr = nums[i];

            long long width = curr % 10;

            long long d = curr / 10;

            int digits = countDig(d);

            // Number of digits occupied by y
            int yDigits = digits - width;

            long long divisor = 1;

            for (int j = 0; j < yDigits; j++) {
                divisor *= 10;
            }

            // First 'width' digits
            long long x = d / divisor;

            // Remaining digits
            long long y = d % divisor;

            res = (res + power(x, y)) % MOD;
        }

        return res;
    }
};