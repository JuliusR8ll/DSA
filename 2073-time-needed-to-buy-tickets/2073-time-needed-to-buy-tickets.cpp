class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i = 0, n = tickets.size(),time = 0;
        do{
            i = i%n;
            if(tickets[i] > 0){
                tickets[i]--;
                time++;
            }
            i++;
        }while(tickets[k] > 0);
        return time;
    }
};