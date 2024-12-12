#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long skjkasdkd(std::vector<long> lst) {
    auto isPrime = [](long n) -> bool {
        for(long i=2;i<=sqrt(n);i++) {
            if(n%i==0) return false;
        }
        return true;
    };
    long maxx = 0;
    for(auto i:lst) {
        if(i>maxx && isPrime(i)) maxx = i;
    }
    long result = 0;
    std::string s = std::to_string(maxx);
    for(auto c:s) result += c-'0';
    return result;
}
int main() {
    auto candidate = skjkasdkd;
    assert(candidate((std::vector<long>({(long)0, (long)3, (long)2, (long)1, (long)3, (long)5, (long)7, (long)4, (long)5, (long)5, (long)5, (long)2, (long)181, (long)32, (long)4, (long)32, (long)3, (long)2, (long)32, (long)324, (long)4, (long)3}))) == (10));
    assert(candidate((std::vector<long>({(long)1, (long)0, (long)1, (long)8, (long)2, (long)4597, (long)2, (long)1, (long)3, (long)40, (long)1, (long)2, (long)1, (long)2, (long)4, (long)2, (long)5, (long)1}))) == (25));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)1, (long)32, (long)5107, (long)34, (long)83278, (long)109, (long)163, (long)23, (long)2323, (long)32, (long)30, (long)1, (long)9, (long)3}))) == (13));
    assert(candidate((std::vector<long>({(long)0, (long)724, (long)32, (long)71, (long)99, (long)32, (long)6, (long)0, (long)5, (long)91, (long)83, (long)0, (long)5, (long)6}))) == (11));
    assert(candidate((std::vector<long>({(long)0, (long)81, (long)12, (long)3, (long)1, (long)21}))) == (3));
    assert(candidate((std::vector<long>({(long)0, (long)8, (long)1, (long)2, (long)1, (long)7}))) == (7));
    assert(candidate((std::vector<long>({(long)8191}))) == (19));
    assert(candidate((std::vector<long>({(long)8191, (long)123456, (long)127, (long)7}))) == (19));
    assert(candidate((std::vector<long>({(long)127, (long)97, (long)8192}))) == (10));
}
