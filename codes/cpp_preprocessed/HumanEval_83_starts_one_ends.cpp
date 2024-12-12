#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long starts_one_ends(long n) {
    if (n == 1) return 1;
    return 18 * pow(10, n - 2);
}
