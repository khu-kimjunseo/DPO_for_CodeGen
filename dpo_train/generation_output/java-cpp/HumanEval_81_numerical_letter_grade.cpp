### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> numericalLetterGrade(ArrayList<Float> grades) {
        ArrayList<String> letterGrade = new ArrayList<String>();
        for (Float gpa : grades) {
            if (gpa == 4.0f) {
                letterGrade.add("A+");
            } else if (gpa > 3.7f) {
                letterGrade.add("A");
            } else if (gpa > 3.3f) {
                letterGrade.add("A-");
            } else if (gpa > 3.0f) {
                letterGrade.add("B+");
            } else if (gpa > 2.7f) {
                letterGrade.add("B");
            } else if (gpa > 2.3f) {
                letterGrade.add("B-");
            } else if (gpa > 2.0f) {
                letterGrade.add("C+");
            } else if (gpa > 1.7f) {
                letterGrade.add("C");
            } else if (gpa > 1.3f) {
                letterGrade.add("C-");
            } else if (gpa > 1.0f) {
                letterGrade.add("D+");
            } else if (gpa > 0.7f) {
                letterGrade.add("D");
            } else if (gpa > 0.0f) {
                letterGrade.add("D-");
            } else {
                letterGrade.add("E");
            }
        }
        return letterGrade;
    }
    
}

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

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<