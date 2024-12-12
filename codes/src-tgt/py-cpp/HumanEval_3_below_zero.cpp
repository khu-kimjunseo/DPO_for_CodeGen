### Python version

from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0

    for op in operations:
        balance += op
        if balance < 0:
            return True

    return False

### C++ version

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

