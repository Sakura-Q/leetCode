class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str="";
        int start=0;//每次查找的开始
        int len=0;
        for(int i=0;i<s.size();i++){
            if(str.find(s[i])==string::npos){
                str=str+s[i];
            }else{
                len=len>str.size()?len:str.size();
                i=s.find_first_of(s[i],start);
                start+=1;
                str="";
            }
        }
        len=len>str.size()?len:str.size();
        return len;
    }
};