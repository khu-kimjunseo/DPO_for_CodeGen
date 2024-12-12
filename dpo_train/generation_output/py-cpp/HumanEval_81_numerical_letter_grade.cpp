### Python version

from typing import List

def numerical_letter_grade(grades: List[float]) -> List[str]:

   
    letter_grade = []
    for gpa in grades:
        if gpa == 4.0:
            letter_grade.append("A+")
        elif gpa > 3.7:
            letter_grade.append("A")
        elif gpa > 3.3:
            letter_grade.append("A-")
        elif gpa > 3.0:
            letter_grade.append("B+")
        elif gpa > 2.7:
            letter_grade.append("B")
        elif gpa > 2.3:
            letter_grade.append("B-")
        elif gpa > 2.0:
            letter_grade.append("C+")
        elif gpa > 1.7:
            letter_grade.append("C")
        elif gpa > 1.3:
            letter_grade.append("C-")
        elif gpa > 1.0:
            letter_grade.append("D+")
        elif gpa > 0.7:
            letter_grade.append("D")
        elif gpa > 0.0:
            letter_grade.append("D-")
        else:
            letter_grade.append("E")
    return letter_grade

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
std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}

std::string numerical_letter_grade(float grade) {
    std::stringstream ss;
    ss << grade;
    return ss.str();
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}

std::string numerical_letter_grade(std::string grade) {
    std::stringstream ss;
    ss << grade;
    return ss.str();
}

std::vector<std::string> numerical_letter_grade(std::vector<std::string> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}

std::string numerical_letter_grade(std::string grade) {
    std::stringstream ss;
    ss << grade;
    return ss.str();
}

std::vector<std::string> numerical_letter_grade(std::vector<std::string> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}

std::string numerical_letter_grade(std::string grade) {
    std::stringstream ss;
    ss << grade;
    return ss.str();
}

std::vector<std::string> numerical_letter_grade(std::vector<std::string> grades) {
    std::vector<std::string> letter_grade;
    for (auto g : grades) {
        letter_grade.push_back(numerical_letter_grade(g));
    }
    return letter_grade;
}

std::string numerical_letter_grade(std::string grade) {
    std::stringstream ss;
    ss << grade;
    return ss.str();
}

std::vector<std::string> numerical_letter_