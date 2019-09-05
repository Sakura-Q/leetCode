class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1)
			return s;
		vector<string> rows(min(s.length(),numRows));
		int currrow=0;
		bool flag=false;
		int y;
		for(char c:s ){
			rows[currrow]+=c;
			if(currrow==0||currrow==numRows-1){
				flag=!flag;
			}
		y=falg?1:-1;
		currrow+=y;
		}
		string result;
		for(string r:rows){
			result+=r;
	
		}
		return result;
    }
};