#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool move_one_ball(std::vector<long> arr) {
    std::vector<long> sortedArray = new std::vector<long>();
    std::vector<long> myArr = new std::vector<long>();
    for (int i = 0; i < arr.size(); i++) {
        sortedArray.push_back(arr[i]);
        myArr.push_back(arr[i]);
    }
    std::sort(sortedArray.begin(), sortedArray.end());
    std::sort(myArr.begin(), myArr.end());
    int minIndex = arr.indexOf(Collections.min(arr));
    List<Long> myArr2 = new List<Long>();
    myArr2.push_back(myArr.at(minIndex));
    myArr2.push_back(myArr.at(minIndex));
    for (int i = 0; i < arr.size(); i++) {
        if (!myArr2.get(i).equals(sortedArray.get(i))) {
            return false;
        }
    }
    return true;
}
int main() {
    auto candidate = move_one_ball;
    assert(candidate((std::vector<long>({(long)3, (long)4, (long)5, (long)1, (long)2}))) == (true));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)10, (long)1, (long)2}))) == (true));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)1, (long)2}))) == (false));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)4, (long)1, (long)2}))) == (false));
    assert(candidate((std::vector<long>())) == (true));
}
