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

