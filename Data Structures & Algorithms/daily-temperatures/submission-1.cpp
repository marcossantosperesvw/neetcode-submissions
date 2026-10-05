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

                while (!pilha.empty()) {
                    int index = pilha.back().first;
                    int top_temperatura = pilha.back().second;
                    if (t > top_temperatura) {
                        ans[index] = i - index;
                        pilha.pop_back();

                    } else {
                       break;
                    }

                }
                pilha.push_back({i,temperatures[i]});
            }
        }
        return ans;
    }
};
