class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dist = INT_MAX,res;
        for(int i = 0;i<points.size();i++){
            if(x == points[i][0] || y == points[i][1]){
                int d = abs(x-points[i][0]) + abs(points[i][1] - y);
                if(d < dist){
                    dist = d;
                    res = i;;
                } 
            }
        }
        return (dist == INT_MAX)? -1:res;
    }
};