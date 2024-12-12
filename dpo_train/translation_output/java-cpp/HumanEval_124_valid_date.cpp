#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool valid_date(std::string date) {
    std::regex r("^(\\d{4})-(\\d{2})-(\\d{2})$");
    std::smatch m;
    std::regex_search(date, m, r);
    if (m.size() != 4) {
        return false;
    }
    return true;
}
int main() {
    auto candidate = valid_date;
    assert(candidate(("03-11-2000")) == (true));
    assert(candidate(("15-01-2012")) == (false));
    assert(candidate(("04-0-2040")) == (false));
    assert(candidate(("06-04-2020")) == (true));
    assert(candidate(("01-01-2007")) == (true));
    assert(candidate(("03-32-2011")) == (false));
    assert(candidate(("")) == (false));
    assert(candidate(("04-31-3000")) == (false));
    assert(candidate(("06-06-2005")) == (true));
    assert(candidate(("21-31-2000")) == (false));
    assert(candidate(("04-12-2003")) == (true));
    assert(candidate(("04122003")) == (false));
    assert(candidate(("20030412")) == (false));
    assert(candidate(("2003-04")) == (false));
    assert(candidate(("2003-04-12")) == (false));
    assert(candidate(("04-2003")) == (false));
}