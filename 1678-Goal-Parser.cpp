//1678. Goal Parser Interpretation
class Solution {
public:
    string interpret(string command) {
        string res;
        int n=command.size();
        for(int i = 0; i<n; )
        {
            if(command[i]=='G') { 
                res+='G';
                i++;}
            else if(command[i+1]==')') {
                res+='o'; 
                i+=2;}
            else {
                res+="al"; 
                i+=4;}
        }
        return res;
    }
};