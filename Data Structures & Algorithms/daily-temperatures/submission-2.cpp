class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<pair<int, int>> pilha;
        vector<int> ans = vector<int> (temperatures.size());
        for (int i = 0; i < temperatures.size(); i++){
            if (pilha.empty()){
                pilha.push_back({i, temperatures[i]});

            } else {
                int t = temperatures[i];

                while (!pilha.empty() && t > pilha.back().second) {
                    int index = pilha.back().first;
                    ans[index] = i - index;
                    pilha.pop_back();

                }
                pilha.push_back({i,temperatures[i]});
            }
        }
        return ans;
    }
};
