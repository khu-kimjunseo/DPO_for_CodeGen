#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long add_elements(std::vector<long> arr, long k) {
    long sum = 0;
    for (long i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum + k;
}
int main() {
    auto candidate = add_elements;
    assert(candidate((std::vector<long>({(long)1, (long)-2, (long)-3, (long)41, (long)57, (long)76, (long)87, (long)88, (long)99})), (3)) == (-4));
    assert(candidate((std::vector<long>({(long)111, (long)121, (long)3, (long)4000, (long)5, (long)6})), (2)) == (0));
    assert(candidate((std::vector<long>({(long)11, (long)21, (long)3, (long)90, (long)5, (long)6, (long)7, (long)8, (long)9})), (4)) == (125));
    assert(candidate((std::vector<long>({(long)111, (long)21, (long)3, (long)4000, (long)5, (long)6, (long)7, (long)8, (long)9})), (4)) == (24));
    assert(candidate((std::vector<long>({(long)1})), (1)) == (1));
}
