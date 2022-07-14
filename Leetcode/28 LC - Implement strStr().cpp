class Solution {
public:
    int strStr(string haystack, string needle) {

        int len = needle.size();

        if(len == 0) return 0;

        if (haystack.size() < len) return -1;

        for (int index=0; index <= haystack.size()- len; index++){
            if (string (haystack.begin()+index, haystack.begin()+index+len) == needle) return index;
        }

        return -1;
    }

};