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
    
    public static void main(String[] args) {
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)4.0f, (float)3l, (float)1.7f, (float)2l, (float)3.5f)))).equals((new ArrayList<String>(Arrays.asList((String)"A+", (String)"B", (String)"C-", (String)"C", (String)"A-")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)1.2f)))).equals((new ArrayList<String>(Arrays.asList((String)"D+")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.5f)))).equals((new ArrayList<String>(Arrays.asList((String)"D-")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.0f)))).equals((new ArrayList<String>(Arrays.asList((String)"E")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)0.3f, (float)1.5f, (float)2.8f, (float)3.3f)))).equals((new ArrayList<String>(Arrays.asList((String)"D", (String)"D-", (String)"C-", (String)"B", (String)"B+")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.0f, (float)0.7f)))).equals((new ArrayList<String>(Arrays.asList((String)"E", (String)"D-")))));
    }

}
