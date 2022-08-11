class Solution {
public:
int maximum69Number (int num) {

    //Converting integer to string
    string s=to_string(num);
    
    for(int i=0 ; i<s.size() ; i++)
    {
    //If '6' will be made '9' in starting of a number then it will give maximum number
        if(s[i]=='6')
        {
            s[i]='9';
            break;
        }
    }
    
    //Returning the required result by converting string to integer form
    return stoi(s);
}
};