class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            q.push({i,tickets[i]});
        }
        int time=0;
        while(!q.empty()){
            auto x= q.front();
            x.second--;
            q.pop();
            time++;

            if(x.second>0){
                q.push(x);
            }
            else if(x.first == k){
                return time;
            }
        }
        return time;
    }
};