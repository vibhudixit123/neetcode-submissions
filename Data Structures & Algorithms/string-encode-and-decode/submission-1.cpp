class Solution {
public:

    string encode(vector<string>& strs) {

        if(strs.empty()) return "";
        vector<int>size;
        string str;

        for(int i=0;i<=strs.size()-1;i++){
            string s = strs[i];
            size.push_back(s.size());
        }
        for(int sz:size){
            str.append(to_string(sz)); 
            str.push_back(',');       
            
        }
        str.push_back('#');
        for(int i=0;i<=strs.size()-1;i++){
            string s = strs[i];
            str.append(s);
        }
        return str;

    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<int>sizes;
        vector<string>result;
        int i=0;
        while(s[i] != '#'){
            int j = i;
            while(s[j]!= ','){
                j++;
            }
            sizes.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
        i++;
        for(int sz : sizes) {
            result.push_back(s.substr(i,sz));
            i+=sz;
        }
        return result;

    }
};
