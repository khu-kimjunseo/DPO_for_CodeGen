#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}
int main() {
    auto candidate = numerical_letter_grade;
    assert(candidate((std::vector<float>({(float)4.0f, (float)3, (float)1.7f, (float)2, (float)3.5f}))) == (std::vector<std::string>({(std::string)"A+", (std::string)"B", (std::string)"C-", (std::string)"C", (std::string)"A-"})));
    assert(candidate((std::vector<float>({(float)1.2f}))) == (std::vector<std::string>({(std::string)"D+"})));
    assert(candidate((std::vector<float>({(float)0.5f}))) == (std::vector<std::string>({(std::string)"D-"})));
    assert(candidate((std::vector<float>({(float)0.0f}))) == (std::vector<std::string>({(std::string)"E"})));
    assert(candidate((std::vector<float>({(float)1.0f, (float)0.3f, (float)1.5f, (float)2.8f, (float)3.3f}))) == (std::vector<std::string>({(std::string)"D", (std::string)"D-", (std::string)"C-", (std::string)"B", (std::string)"B+"})));
    assert(candidate((std::vector<float>({(float)0.0f, (float)0.7f}))) == (std::vector<std::string>({(std::string)"E", (std::string)"D-"})));
}
