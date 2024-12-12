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
    try {
        date = date.substr(0, date.find(' '));
        int month, day, year;
        sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);
        if (month < 1 || month > 12) {
            return false;
        }
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
            return false;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
            return false;
        }
        if (month == 2 && (day < 1 || day > 29)) {
            return false;
        }
    } catch (...) {
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
