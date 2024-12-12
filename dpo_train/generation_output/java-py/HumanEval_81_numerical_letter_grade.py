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

### Python version

from typing import List

def numerical_letter_grade(grades: List[float]) -> List[str]:
    letterGrade = []
    for grade in grades:
        if grade == 4.0f:
            letterGrade.append("A+")
        elif grade == 3.7f:
            letterGrade.append("A")
        elif grade == 3.3f:
            letterGrade.append("A-")
        elif grade == 3.0f:
            letterGrade.append("B+")
        elif grade == 2.7f:
            letterGrade.append("B")
        elif grade == 2.3f:
            letterGrade.append("B-")
        elif grade == 2.0f:
            letterGrade.append("C+")
        elif grade == 1.7f:
            letterGrade.append("C")
        elif grade == 1.3f:
            letterGrade.append("C-")
        elif grade == 1.0f:
            letterGrade.append("D+")
        elif grade == 0.7f:
            letterGrade.append("D")
        elif grade == 0.0f:
            letterGrade.append("D-")
        else:
            letterGrade.append("E")
    return letterGrade

### Java version

import java.util.stream

def numerical_letter_grade(grades: List[float]) -> List[str]:
    letterGrade = []
    for grade in grades:
        if grade == 4.0f:
            letterGrade.append("A+")
        elif grade == 3.7f:
            letterGrade.append("A")
        elif grade == 3.3f:
            letterGrade.append("A-")
        elif grade == 3.0f:
            letterGrade.append("B+")
        elif grade == 2.7f:
            letterGrade.append("B")
        elif grade == 2.3f:
            letterGrade.append("B-")
        elif grade == 2.0f:
            letterGrade.append("C+")
        elif grade == 1.7f:
            letterGrade.append("C")
        elif grade == 1.3f:
            letterGrade.append("C-")
        elif grade == 1.0f:
            letterGrade.append("D+")
        elif grade == 0.7f:
            letterGrade.append("D")
        el