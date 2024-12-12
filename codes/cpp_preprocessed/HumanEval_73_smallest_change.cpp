#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long smallest_change(std::vector<long> arr) {
    long ans = 0;
    for (long i = 0; i < arr.size() / 2; i++) {
        if (arr[i] != arr[arr.size() - i - 1]) {
            ans++;
        }
    }
    return ans;
}
