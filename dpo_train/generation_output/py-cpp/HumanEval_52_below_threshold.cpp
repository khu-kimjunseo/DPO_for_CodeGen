### Python version

from typing import List

def below_threshold(l: List[int], t: int) -> bool:
    for e in l:
        if e >= t:
            return False
    return True

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool below_threshold(std::vector<long> l, long t) {
    assert(l.size() > 0);
    assert(l.size() == t);
    long sum = 0;
    for (long i = 0; i < l.size(); i++) {
        sum += l[i];
    }
    return sum >= t;
}

int main() {
    std::vector<long> l;
    std::vector<long> l2;
    std::vector<long> l3;
    std::vector<long> l4;
    std::vector<long> l5;
    std::vector<long> l6;
    std::vector<long> l7;
    std::vector<long> l8;
    std::vector<long> l9;
    std::vector<long> l10;
    std::vector<long> l11;
    std::vector<long> l12;
    std::vector<long> l13;
    std::vector<long> l14;
    std::vector<long> l15;
    std::vector<long> l16;
    std::vector<long> l17;
    std::vector<long> l18;
    std::vector<long> l19;
    std::vector<long> l20;
    std::vector<long> l21;
    std::vector<long> l22;
    std::vector<long> l23;
    std::vector<long> l24;
    std::vector<long> l25;
    std::vector<long> l26;
    std::vector<long> l27;
    std::vector<long> l28;
    std::vector<long> l29;
    std::vector<long> l30;
    std::vector<long> l31;
    std::vector<long> l32;
    std::vector<long> l33;
    std::vector<long> l34;
    std::vector<long> l35;
    std::vector<long> l36;
    std::vector<long> l37;
    std::vector<long> l38;
    std::vector<long> l39;
    std::vector<long> l40;
    std::vector<long> l41;
    std::vector<long> l42;
    std::vector<long> l43;
    std::vector<long> l44;
    std::vector<long> l45;
    std::vector<long> l46;
    std::vector<long> l47;
    std::vector<long> l48;
    std::vector<long> l49;
    std::vector<long> l50;
    std::vector<long> l51;
    std::vector<long> l52;
    std::vector<long> l53;
    std::vector<long> l54;
    std::vector<long> l55;
    std::vector<long> l56;
    std::vector<long> l57;
    std::vector<long> l58;
    std::vector<long> l59;
    std::vector<long> l60;
    std::vector<long> l61;
    std::vector<long> l62;
    std::vector<long> l63;
    std::vector<long> l64;
    std::vector<long> l65;
    std::vector<long> l66;
    std::vector<long> l67;
    std::vector<long> l68;
    std::vector<long> l69;
    std::vector<long> l70;
    std::vector<long> l71;
    std::vector<long> l72;
    std::vector<long> l73;
