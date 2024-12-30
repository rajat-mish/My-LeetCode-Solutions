class Solution {
public:
void reverse(string& s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}


void rWords(string & s) {
    int n = s.size();
    int start = 0;

  
    for (int end = 0; end < n; end++) {
        if (s[end] == ' ' && s[start]!=' ') {
            reverse(s, start, end - 1); 
            start = end + 1;          
        } else if (end == n - 1 && s[start]!=' ') {
            reverse(s, start, end);   
        }
        else if(s[start]== ' '){
            start++;
        }
    }

   
    reverse(s, 0, n - 1);
}
    string reverseWords(string s) {
        rWords(s);
            string input = s;
    stringstream ss(input);
    string word, output;

    while (ss >> word) {
        if (!output.empty()) {
            output += " ";
        }
        output += word;
    }
        return output;
    }
};
