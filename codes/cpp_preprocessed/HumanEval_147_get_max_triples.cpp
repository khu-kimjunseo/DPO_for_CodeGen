#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long get_max_triples(long n) {
    std::vector<long> A;
    for (long i = 1; i <= n; i++) {
        A.push_back(i*i - i + 1);
    }
    long ans = 0;
    for (long i = 0; i < n; i++) {
        for (long j = i+1; j < n; j++) {
            for (long k = j+1; k < n; k++) {
                if ((A[i]+A[j]+A[k])%3 == 0) {
                    ans++;
                }
            }
        }
    }
    return ans;
}
