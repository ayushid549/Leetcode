
class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string temp = "";
        int i = 0;
        vector<string> v;

        while (i < s.size() && count != k) {
            temp += s[i];
            if (s[i+1] == ' '){
                v.push_back(temp);
                temp = "";
                count++;
            }
            i++;
        }
        if (!temp.empty()) {
            v.push_back(temp);
        }

        string str = "";
        for (int i = 0; i < v.size(); i++) {
            str += v[i];
        }
        return str;
    }
};
