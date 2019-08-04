class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
    vector<char> vt;
    vector<char>::iterator d;
    int len=1;
        int flag=1;
        vt.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            for(d=vt.begin();d!=vt.end();++d){
                if(*d==s[i]){
                    vt.erase(vt.begin(),d+1);
                    flag=0;
                    break;
                    
                }
            }
            if(flag){
                vt.push_back(s[i]);
               if(vt.size()>len)
                   len=vt.size();
            }else{
                flag=1;
                vt.push_back(s[i]);
            }
            
        };
          return len;
    };
};