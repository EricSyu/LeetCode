class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int head = 0, tail = 0;
        map<char,int> subStr;

        while(tail<s.size()){
            auto p = subStr.insert(pair<char,int>(s[tail], tail));
            if(!p.second){
                head = max(subStr.find(s[tail])->second + 1, head);
                subStr.find(s[tail])->second = tail;
            }
            maxLen = max(maxLen, tail-head+1);
            tail++;
        }
        return maxLen;
    }
};