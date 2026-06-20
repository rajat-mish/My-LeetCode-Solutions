class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;

        int i = 0;
        int n = words.size();

        while (i < n) {

            string temp = "";
            int rlen = maxWidth;
            int cnt = 0;

           

            while (i < n && rlen >= (int)words[i].size()) {
                temp += words[i];
                temp += " ";

                rlen -= words[i].size();
                rlen--;

                cnt++;
                i++;
            }

            bool lastLine = (i == n);

            cnt--; // number of gaps

            // remove trailing space that we always added
            temp.pop_back();
            rlen++;

            // LAST LINE => left justify
            if (lastLine) {
                temp += string(rlen, ' ');
                ans.push_back(temp);
                continue;
            }

            // SINGLE WORD LINE
            if (cnt == 0) {
                temp += string(rlen, ' ');
                ans.push_back(temp);
                continue;
            }

            int sp = rlen / cnt;
            int ex = rlen % cnt;

            string res = "";
            int gapNo = 0;

            for (char ch : temp) {
                if (ch != ' ') {
                    res += ch;
                } else {
                    int spaces = 1 + sp;

                    if (gapNo < ex)
                        spaces++;

                    res += string(spaces, ' ');
                    gapNo++;
                }
            }

            ans.push_back(res);
        }

        return ans;
    }
};
