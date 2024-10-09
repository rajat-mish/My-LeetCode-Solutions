class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if ((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
     s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
    (s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' ||
     s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')) {
    swap(s[i],s[j]);
    i++;j--;

}
else if((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
     s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
    (s[j] != 'A' || s[j] != 'E' || s[j] != 'I' || s[j] != 'O' || s[j] != 'U' ||
     s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u')){
        j--;
     }
     else{
        i++;
     }

        }
        return s;
    }
};
