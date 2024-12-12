### Python version

from typing import List

def sorted_list_sum(lst: List[str]) -> List[str]:
    lst.sort()
    new_lst = []
    for i in lst:
        if len(i)%2 == 0:
            new_lst.append(i)
    return sorted(new_lst, key=len)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        ArrayList<String> new_lst = new ArrayList<>();
        for (int i = 0; i < lst.size(); i++) {
            new_lst.add(lst.get(i));
        }
        return new_lst;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> lst = new ArrayList<>();
        lst.add("1");
        lst.add("2");
        lst.add("3");
        lst.add("4");
        lst.add("5");
        lst.add("6");
        lst.add("7");
        lst.add("8");
        lst.add("9");
        lst.add("10");
        lst.add("11");
        lst.add("12");
        lst.add("13");
        lst.add("14");
        lst.add("15");
        lst.add("16");
        lst.add("17");
        lst.add("18");
        lst.add("19");
        lst.add("20");
        lst.add("21");
        lst.add("22");
        lst.add("23");
        lst.add("24");
        lst.add("25");
        lst.add("26");
        lst.add("27");
        lst.add("28");
        lst.add("29");
        lst.add("30");
        lst.add("31");
        lst.add("32");
        lst.add("33");
        lst.add("34");
        lst.add("35");
        lst.add("36");
        lst.add("37");
        lst.add("38");
        lst.add("39");
        lst.add("40");
        lst.add("41");
        lst.add("42");
        lst.add("43");
        lst.add("44");
        lst.add("45");
        lst.add("46");
        lst.add("47");
        lst.add("48");
        lst.add("49");
        lst.add("50");
        lst.add("51");
        lst.add("52");
        lst.add("53");
        lst.add("54");
        lst.add("55");
        lst.add("56");
        lst.add("57");
        lst.add("58");
        lst.add("59");
        lst.add("60");
        lst.add("61");
        lst.add("62");
        lst.add("63");
        lst.add("64");
        lst.add("65");
        lst.add("66");
        lst.add("67");
        lst.add("68");
        lst.add("69");
        lst.add("70");
        lst.add("71");
        lst.add("72");
        lst.add("73");
        lst.add("74");
        lst.add("75");
        lst.add("76");
        lst.add("77");
        lst.add("78");
        lst.add("79");
        lst.add("80");
        lst.add("81");
        lst.add("82");
        lst.add