class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> pq;
        for(int i = 0;i<k;i++){
            pq.push({dist(points[i]),points[i]});
        }
        for(int i = k;i<points.size();i++){
            vector<int> top = pq.top().second;
            if(dist(points[i]) < dist(top)){
                pq.pop();
                pq.push({dist(points[i]),points[i]});
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
    private:
    double dist(vector<int> &v){
        double x = sqrt((double)(v[0]*v[0] + v[1]*v[1]));
        return x;
    }
};