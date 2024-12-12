### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool iscube(long a) {
    a = abs(a);
    return pow(round(pow(a, 1. / 3)), 3) == a;
}


### Python version

def iscube(a: int) -> bool:
    a = abs(a)
    return int(round(a ** (1. / 3))) ** 3 == a
