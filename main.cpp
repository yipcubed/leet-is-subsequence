#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
  bool isSubsequence(string s, string t) {
    if (s.empty()) return true;
    int si = 0;
    int ti = 0;
    while (ti < t.length()) {
      if (s[si] == t[ti]) {
        ++si;
        if (si >= s.length()) {
          return true;
        }
      }
      ++ti;
    }
    return false;
  }
};

void test1() {
    string s = "abc", t = "ahbgdc";

    cout << "true ? " << Solution().isSubsequence(s, t) << endl;

    s = "axc";
    cout << "false ? " << Solution().isSubsequence(s, t) << endl;
}

void test2() {

}

void test3() {

}