#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> m;

        for (int i : bulbs) {
            m[i]++;
        }

        vector<int> ans;

        for (auto i : m) {
            if (i.second % 2)
                ans.push_back(i.first);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the number of bulbs: ";
    cin >> n;

    vector<int> bulbs(n);
    cout << "Enter the bulb numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> bulbs[i];
    }

    Solution sol;
    vector<int> result = sol.toggleLightBulbs(bulbs);

    cout << "Bulbs that remain on: ";
    for (int bulb : result) {
        cout << bulb << " ";
    }
    cout << endl;

    return 0;
}