// Given an integer n, return all the numbers in the range [1, n] sorted in lexicographical order.
// Input: n = 13
// Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]


class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>vec;
        for(int i=1;i<=n;i++)
            vec.push_back(to_string(i));
        sort(vec.begin(),vec.end());
        //but we have to return a vector of int type
        vector<int>intvec;
        for(int i=0;i<n;i++)
            intvec.push_back(stoi(vec[i]));
        
        return intvec;
        
    }
};