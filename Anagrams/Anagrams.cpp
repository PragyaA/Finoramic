vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    vector<vector<int> > ans;
    map<string, vector<int> > mp;
    for (int i = 0; i < a.size(); i++) {
        string stringC = a[i];
        sort(stringC.begin(), copyString.end());
        mp[copyString].push_back(i + 1);
    }
    map<string, vector<int> >::iterator i;
    for(i = mp.begin(); i != mp.end(); i++) {
        ans.push_back(i->second);
    }
    return ans;
}