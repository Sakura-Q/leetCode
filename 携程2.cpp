#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
string resolve(string expr) {
    int len=expr.length();
    int left=0,right=0;
    string result="";
    queue<char>  q;
    stack<char> s;
    for(int i=0;i<len;i++){
        if(expr[i]=='('){
            left++;
        }

        if(expr[i]==')')
        {
            right++;
        }

    }
    if(left==right){
        for (int i = 0; i <len ; ++i) {
            if(expr[i]==')'){
                while(!s.empty()&&s.top()!='('){
                    char t=s.top();
                    q.push(t);
                    s.pop();
                }

                if(!s.empty()&&s.top()=='(')
                    s.pop();
                while(!q.empty()){
                    char tt=q.front();
                    s.push(tt);
                    q.pop();
                }

            }else{
                s.push(expr[i]);
            }
        }
        while(!s.empty()){
            result+=s.top();
            s.pop();
        }
        reverse(result.begin(),result.end());
        return result;

    }
    else
        return "";




}
int main() {
    string res;

    string _expr;
    getline(cin, _expr);

    res = resolve(_expr);
    cout << res << endl;

    return 0;

}