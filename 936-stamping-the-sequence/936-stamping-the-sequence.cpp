class Solution {
    string st,tar;
public:
    bool isvalid(int pos){
        //cout<<2<<" ";
        int counh=0;
        for(int i=0;i<st.size();i++){
            if(tar[i+pos]=='#'){
                counh++;
            }
            else if(tar[i+pos]!=st[i]){
                return false;
            }
        }
        if(counh!=st.size()){
            return true;
        }
        return false;
    }
    vector<int> movesToStamp(string stamp, string target){
        st=stamp;
        tar=target;
        vector<int> res;
        int lim=10*target.size();
        int tot=0;
        //cout<<tar.size()-st.size();
        while(res.size()<lim){
            int pr=res.size();
            for(int i=0;i<=tar.size()-st.size();i++){ //  check for every possible position
                //cout<<i<<" ";
                if(isvalid(i)){  //  if it is  valid position then do the following
                    cout<<i<<" ";
                    res.push_back(i);    // store the position 
                    for(int j=0;j<st.size();j++){
                        if(tar[j+i]!='#'){
                            tot++;
                            tar[i+j]='#';
                        }
                    }
                }
            }
            if(pr==res.size()){
                break;
            }
        }
        reverse(res.begin(),res.end());  //reverse the answer c'ause we are checking backwards
        if(tot==tar.size()){
            return res;
        }
        return {};
    }
};
