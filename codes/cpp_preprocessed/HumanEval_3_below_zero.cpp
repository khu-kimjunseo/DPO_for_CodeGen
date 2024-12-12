#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_zero(std::vector<long> operations) {
    long balance = 0;
    for (auto op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}
