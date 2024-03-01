class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        int flar,slar;
        while(pq.size() >1){
            flar = pq.top();
            pq.pop();
            slar = pq.top();
            pq.pop();
            if(flar == slar)continue;
            pq.push(flar-slar);
        }
        return (pq.empty())? 0:pq.top();
    }
};