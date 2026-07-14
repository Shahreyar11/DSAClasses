class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int temp = num;
        if(num <= 9){
            return 1;
        }
        while(num != 0){
            int dig = num % 10;
            if(temp % dig == 0){
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};