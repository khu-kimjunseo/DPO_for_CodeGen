#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long search(std::vector<long> lst) {
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator end = lst.end();
    std::vector<long>::iterator it2 = it;
    std::vector<long>::iterator end2 = it2;
    std::vector<long>::iterator it3 = it;
    std::vector<long>::iterator end3 = it2;
    std::vector<long>::iterator it4 = it;
    std::vector<long>::iterator end4 = it2;
    std::vector<long>::iterator it5 = it;
    std::vector<long>::iterator end5 = it2;
    std::vector<long>::iterator it6 = it;
    std::vector<long>::iterator end6 = it2;
    std::vector<long>::iterator it7 = it;
    std::vector<long>::iterator end7 = it2;
    std::vector<long>::iterator it8 = it;
    std::vector<long>::iterator end8 = it2;
    std::vector<long>::iterator it9 = it;
    std::vector<long>::iterator end9 = it2;
    std::vector<long>::iterator it10 = it;
    std::vector<long>::iterator end10 = it2;
    std::vector<long>::iterator it11 = it;
    std::vector<long>::iterator end11 = it2;
    std::vector<long>::iterator it12 = it;
    std::vector<long>::iterator end12 = it2;
    std::vector<long>::iterator it13 = it;
    std::vector<long>::iterator end13 = it2;
    std::vector<long>::iterator it14 = it;
    std::vector<long>::iterator end14 = it2;
    std::vector<long>::iterator it15 = it;
    std::vector<long>::iterator end15 = it2;
    std::vector<long>::iterator it16 = it;
    std::vector<long>::iterator end16 = it2;
    std::vector<long>::iterator it17 = it;
    std::vector<long>::iterator end17 = it2;
    std::vector<long>::iterator it18 = it;
    std::vector<long>::iterator end18 = it2;
    std::vector<long>::iterator it19 = it;
    std::vector<long>::iterator end19 = it2;
    std::vector<long>::iterator it20 = it;
    std::vector<long>::iterator end20 = it2;
    std::vector<long>::iterator it21 = it;
    std::vector<long>::iterator end21 = it2;
    std::vector<long>::iterator it22 = it;
    std::vector<long>::iterator end22 = it2;
    std::vector<long>::iterator it23 = it;
    std::vector<long>::iterator end23 = it2;
    std::vector<long>::iterator it24 = it;
    std::vector<long>::iterator end24 =
}
int main() {
    auto candidate = search;
    assert(candidate((std::vector<long>({(long)5, (long)5, (long)5, (long)5, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)4, (long)1, (long)4, (long)1, (long)4, (long)4}))) == (4));
    assert(candidate((std::vector<long>({(long)3, (long)3}))) == (-1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)8, (long)8, (long)8, (long)8, (long)8, (long)8}))) == (8));
    assert(candidate((std::vector<long>({(long)2, (long)3, (long)3, (long)2, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)2, (long)7, (long)8, (long)8, (long)4, (long)8, (long)7, (long)3, (long)9, (long)6, (long)5, (long)10, (long)4, (long)3, (long)6, (long)7, (long)1, (long)7, (long)4, (long)10, (long)8, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)8, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)6, (long)7, (long)1, (long)8, (long)8, (long)10, (long)5, (long)8, (long)5, (long)3, (long)10}))) == (1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)3, (long)6, (long)5, (long)6, (long)4}))) == (-1));
    assert(candidate((std::vector<long>({(long)6, (long)9, (long)6, (long)7, (long)1, (long)4, (long)7, (long)1, (long)8, (long)8, (long)9, (long)8, (long)10, (long)10, (long)8, (long)4, (long)10, (long)4, (long)10, (long)1, (long)2, (long)9, (long)5, (long)7, (long)9}))) == (1));
    assert(candidate((std::vector<long>({(long)1, (long)9, (long)10, (long)1, (long)3}))) == (1));
    assert(candidate((std::vector<long>({(long)6, (long)9, (long)7, (long)5, (long)8, (long)7, (long)5, (long)3, (long)7, (long)5, (long)10, (long)10, (long)3, (long)6, (long)10, (long)2, (long)8, (long)6, (long)5, (long)4, (long)9, (long)5, (long)3, (long)10}))) == (5));
    assert(candidate((std::vector<long>({(long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)10, (long)6, (long)4, (long)3, (long)5, (long)8, (long)2, (long)4, (long)2, (long)8, (long)4, (long)6, (long)10, (long)4, (long)2, (long)1, (long)10, (long)2, (long)1, (long)1, (long)5}))) == (4));
    assert(candidate((std::vector<long>({(long)2, (long)10, (long)4, (long)8, (long)2, (long)10, (long)5, (long)1, (long)2, (long)9, (long)5, (long)5, (long)6, (long)3, (long)8, (long)6, (long)4, (long)10}))) == (2));
    assert(candidate((std::vector<long>({(long)1, (long)6, (long)10, (long)1, (long)6, (long)9, (long)10, (long)8, (long)6, (long)8, (long)7, (long)3}))) == (1));
    assert(candidate((std::vector<long>({(long)9, (long)2, (long)4, (long)1, (long)5, (long)1, (long)5, (long)2, (long)5, (long)7, (long)7, (long)7, (long)3, (long)10, (long)1, (long)5, (long)4, (long)2, (long)8, (long)4, (long)1, (long)9, (long)10, (long)7, (long)10, (long)2, (long)8, (long)10, (long)9, (long)4}))) == (4));
    assert(candidate((std::vector<long>({(long)2, (long)6, (long)4, (long)2, (long)8, (long)7, (long)5, (long)6, (long)4, (long)10, (long)4, (long)6, (long)3, (long)7, (long)8, (long)8, (long)3, (long)1, (long)4, (long)2, (long)2, (long)10, (long)7}))) == (4));
    assert(candidate((std::vector<long>({(long)9, (long)8, (long)6, (long)10, (long)2, (long)6, (long)10, (long)2, (long)7, (long)8, (long)10, (long)3, (long)8, (long)2, (long)6, (long)2, (long)3, (long)1}))) == (2));
    assert(candidate((std::vector<long>({(long)5, (long)5, (long)3, (long)9, (long)5, (long)6, (long)3, (long)2, (long)8, (long)5, (long)6, (long)10, (long)10, (long)6, (long)8, (long)4, (long)10, (long)7, (long)7, (long)10, (long)8}))) == (-1));
    assert(candidate((std::vector<long>({(long)10}))) == (-1));
    assert(candidate((std::vector<long>({(long)9, (long)7, (long)7, (long)2, (long)4, (long)7, (long)2, (long)10, (long)9, (long)7, (long)5, (long)7, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)5, (long)4, (long)10, (long)2, (long)1, (long)1, (long)10, (long)3, (long)6, (long)1, (long)8}))) == (1));
    assert(candidate((std::vector<long>({(long)7, (long)9, (long)9, (long)9, (long)3, (long)4, (long)1, (long)5, (long)9, (long)1, (long)2, (long)1, (long)1, (long)10, (long)7, (long)5, (long)6, (long)7, (long)6, (long)7, (long)7, (long)6}))) == (1));
    assert(candidate((std::vector<long>({(long)3, (long)10, (long)10, (long)9, (long)2}))) == (-1));
}
