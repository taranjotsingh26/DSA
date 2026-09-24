class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n = score.size();
        vector<string> answer(n);
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }
        for (int rank = 1; rank <= n; rank++) {
            
            auto [sc, index] = pq.top();
            pq.pop();

            if (rank == 1) {
                answer[index] = "Gold Medal";
            }
            else if (rank == 2) {
                answer[index] = "Silver Medal";
            }
            else if (rank == 3) {
                answer[index] = "Bronze Medal";
            }
            else {
                answer[index] = to_string(rank);
            }
        }
        return answer;
    }
};