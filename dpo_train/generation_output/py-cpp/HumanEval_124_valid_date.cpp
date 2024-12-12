### Python version

def valid_date(date: str) -> bool:
    try:
        date = date.strip()
        month, day, year = date.split('-')
        month, day, year = int(month), int(day), int(year)
        if month < 1 or month > 12:
            return False
        if month in [1,3,5,7,8,10,12] and day < 1 or day > 31:
            return False
        if month in [4,6,9,11] and day < 1 or day > 30:
            return False
        if month == 2 and day < 1 or day > 29:
            return False
    except:
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
bool valid_date(std::string date) {
    std::regex date_regex("^([0-9]{4})-([0-9]{2})-([0-9]{2})$");
    std::smatch match;
    std::regex_search(date, match, date_regex);
    return match.size() == 7;
}

int main() {
    std::string date = "2015-01-01";
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date) << std::endl;
    std::cout << "Valid date: " << valid_date(date