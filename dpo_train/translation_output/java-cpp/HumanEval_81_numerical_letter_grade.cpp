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
    std::vector<std::string> letterGrade;
    for (float gpa : grades) {
        if (gpa == 4.0f) {
            letterGrade.push_back("A+");
        } else if (gpa > 3.7f) {
            letterGrade.push_back("A");
        } else if (gpa > 3.3f) {
            letterGrade.push_back("A-");
        } else if (gpa > 3.0f) {
            letterGrade.push_back("B+");
        } else if (gpa > 2.7f) {
            letterGrade.push_back("B");
        } else if (gpa > 2.3f) {
            letterGrade.push_back("B-");
        } else if (gpa > 2.0f) {
            letterGrade.push_back("C+");
        } else if (gpa > 1.7f) {
            letterGrade.push_back("C");
        } else if (gpa > 1.3f) {
            letterGrade.push_back("C-");
        } else if (gpa > 1.0f) {
            letterGrade.push_back("D+");
        } else if (gpa > 0.7f) {
            letterGrade.push_back("D");
        } else if (gpa > 0.0f) {
            letterGrade.push_back("D-");
        } else {
            letterGrade.push_back("E");
        }
    }
    return letterGrade;
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
