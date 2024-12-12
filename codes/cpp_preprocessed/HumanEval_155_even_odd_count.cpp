#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> even_odd_count(long num) {
    long even_count = 0;
    long odd_count = 0;
    for (auto i: std::to_string(abs(num))) {
        if (int(i)%2==0) {
            even_count +=1;
        } else {
            odd_count +=1;
        }
    }
    return std::make_tuple(even_count, odd_count);
}
