class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        for(char c: s){
            if(c!='#'){
                ss.push(c);
            }
            if(c=='#' && !ss.empty()){
                ss.pop();
            }
        }
        stack<char> tt;
                for(char c: t){
            if(c!='#'){
                tt.push(c);
            }
            if(c=='#' && !tt.empty()){
                tt.pop();
            }
        }
        if(ss==tt){
            return 1;
        }
        return 0;
    }
};
