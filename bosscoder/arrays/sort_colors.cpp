class Solution {
public:
    void sortColors(vector<int>& nums) {

        if (nums.size() <= 1) {
            return;
        }

        int countO = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i=0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                countO++;
            }else if (nums[i] == 1) {
                count1++;
            }else {
                count2++;
            }
        }

        for (int i=0; i < nums.size(); i++) {
            if (countO > 0) {
                nums[i] = 0;
                countO--;
            }else if (count1 > 0) {
                nums[i] = 1;
                count1--;
            }else {
                nums[i] = 2;
                count2--;
            }
        }
    }
};