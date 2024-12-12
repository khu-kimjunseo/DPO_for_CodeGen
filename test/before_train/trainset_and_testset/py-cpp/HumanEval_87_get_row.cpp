#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::tuple<long, long>> get_row(std::vector<std::vector<long>> lst, long x) {
    std::vector<std::tuple<long, long>> res;
    for (int i = 0; i < lst.size(); i++) {
        res.push_back(std::make_tuple(lst[i][0], lst[i][1]));
    }
    return res;
}
int main() {
    auto candidate = get_row;
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)1, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)1})})), (1)) == (std::vector<std::tuple<long, long>>({(std::tuple<long, long>)std::make_tuple(0, 0), (std::tuple<long, long>)std::make_tuple(1, 4), (std::tuple<long, long>)std::make_tuple(1, 0), (std::tuple<long, long>)std::make_tuple(2, 5), (std::tuple<long, long>)std::make_tuple(2, 0)})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6})})), (2)) == (std::vector<std::tuple<long, long>>({(std::tuple<long, long>)std::make_tuple(0, 1), (std::tuple<long, long>)std::make_tuple(1, 1), (std::tuple<long, long>)std::make_tuple(2, 1), (std::tuple<long, long>)std::make_tuple(3, 1), (std::tuple<long, long>)std::make_tuple(4, 1), (std::tuple<long, long>)std::make_tuple(5, 1)})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)3, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)1, (long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)1, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)1, (long)6}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)1})})), (1)) == (std::vector<std::tuple<long, long>>({(std::tuple<long, long>)std::make_tuple(0, 0), (std::tuple<long, long>)std::make_tuple(1, 0), (std::tuple<long, long>)std::make_tuple(2, 1), (std::tuple<long, long>)std::make_tuple(2, 0), (std::tuple<long, long>)std::make_tuple(3, 2), (std::tuple<long, long>)std::make_tuple(3, 0), (std::tuple<long, long>)std::make_tuple(4, 3), (std::tuple<long, long>)std::make_tuple(4, 0), (std::tuple<long, long>)std::make_tuple(5, 4), (std::tuple<long, long>)std::make_tuple(5, 0), (std::tuple<long, long>)std::make_tuple(6, 5), (std::tuple<long, long>)std::make_tuple(6, 0)})));
    assert(candidate((std::vector<std::vector<long>>()), (1)) == (std::vector<std::tuple<long, long>>()));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1})})), (2)) == (std::vector<std::tuple<long, long>>()));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>(), (std::vector<long>)std::vector<long>({(long)1}), (std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3})})), (3)) == (std::vector<std::tuple<long, long>>({(std::tuple<long, long>)std::make_tuple(2, 2)})));
}
