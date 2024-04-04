#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

bool check(vector<string>& arr, string& sub, int idx) {
        for (int i = 0; i < arr.size(); ++i) {
            if (i != idx && arr[i].find(sub) != string::npos) {
                return false;
            }
        }
        return true;
    }

vector<string> shortestSubstrings(vector<string>& arr) {
    vector<string> answer(arr.size());

    for (int i = 0; i < arr.size(); ++i) {
        string ans;
        for (int len = 1; len <= arr[i].size(); ++len) {
            bool found = false;
            for (int start = 0; start <= arr[i].size() - len; ++start) {
                string sub = arr[i].substr(start, len);
                if (check(arr, sub, i)) {
                    if (ans.empty() || sub < ans) {
                        ans = sub;
                        found = true;
                    }
                }
            }
            if (found) break;
        }
        answer[i] = ans;
    }
    return answer;
}
