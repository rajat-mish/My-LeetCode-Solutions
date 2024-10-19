class Solution {
public:
    char findKthBit(int n, int k) {
        int len = pow(2, n) - 1;
        return recur(len, k);
    }

    char recur(int len, int k) {
        // Base case
        if (len == 1) {
            return '0';
        }

        int half = len / 2;
        int middle = half + 1;
        cout << "len -> " << len << " ,middle -> " << middle << " ,k -> " << k << endl;

        if (k == middle) {
            return '1';
        } else if (k < middle) {  // Left part
            return recur(half, k);
        } else {  // Right part
            char ans = recur(half, 1 + len - k);
            return (ans == '0') ? '1' : '0';
        }
    }
};
