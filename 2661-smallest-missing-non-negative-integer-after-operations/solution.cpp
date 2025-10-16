
class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int> freq;
        for (int x : nums)
            freq[((x % value) + value) % value]++;

        int i = 0;
        while (true) {
            int rem = i % value;
            if (freq[rem] == 0)
                return i;
            freq[rem]--;
            i++;
        }
    }
};

