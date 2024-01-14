class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if(word1.size()!=word2.size())
           return false;

        unordered_map<char, int> mp1,mp2;

        for (int i = 0; i < word1.size(); i++) {
            mp1[word1[i]]++;
        }

        for (int i = 0; i < word2.size(); i++) {
            mp2[word2[i]]++;
        }

        unordered_set<char> charset1,charset2;

        for(auto it : mp1){
            charset1.insert(it.first);
        }
        
         for(auto it : mp2){
            charset2.insert(it.first);
        }

        if(charset1!=charset2)
           return false;

        unordered_multiset<int> freqset1,freqset2;
        
        for(auto it : mp1){
            freqset1.insert(it.second);
        }

        for(auto it : mp2){
            freqset2.insert(it.second);
        }

        return freqset1 == freqset2;
    }
};