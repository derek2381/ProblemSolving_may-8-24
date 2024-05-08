// problem link
// https://leetcode.com/problems/relative-ranks/?envType=daily-question&envId=2024-05-08

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<long long int> pq;
        map<long long int, string> mp;

        for(int i : score){
            pq.push(i);
        }

        long long int count = 1;
        while(pq.size() > 0){
            if(count == 1){
                mp[pq.top()] = "Gold Medal";
            }else if(count == 2){
                mp[pq.top()] = "Silver Medal";
            }else if(count == 3){
                mp[pq.top()] = "Bronze Medal";
            }else{
                mp[pq.top()] = to_string(count);
            }
            count++;
            pq.pop();
        }

        vector<string> res;
        for(int i = 0;i < score.size();i++){
            res.push_back(mp[score[i]]);
        }

        return res;
    }
};
