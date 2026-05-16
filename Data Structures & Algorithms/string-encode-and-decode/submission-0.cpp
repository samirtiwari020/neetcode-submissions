class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (const string& str : strs) {
            s += to_string(str.size()) + "#" + str;
        }
        return s;
    }

   vector<string> decode(string s) {

    vector<string> ans;
    int i = 0;
    int n = s.size();

    while(i < n){

        int j = i;

        while(s[j] != '#') j++;

        int len = stoi(s.substr(i, j-i));

        string str = s.substr(j+1, len);

        ans.push_back(str);

        i = j + 1 + len;
    }

    return ans;
}
};
