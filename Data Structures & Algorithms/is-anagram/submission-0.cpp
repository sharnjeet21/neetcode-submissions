class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> frequency;

        if(s.length() != t.length()){
            return false;
        }

        for(char ch : s){
            frequency[ch]++;
        }

        for(char ch : t){
            frequency[ch]--;

            if(frequency[ch] < 0){
                return false;
            }
        }

        return true;
        
    }
};
