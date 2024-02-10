class Solution {
public:
    
    bool isPalindrome(const string& str, int start, int end) {
        while (start < end) {
            if (str[start] != str[end])
                return false;
            ++start;
            --end;
        }
        return true;
    }
     
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j))
                    ++count;
            }
        }
        return count;
    }
};
