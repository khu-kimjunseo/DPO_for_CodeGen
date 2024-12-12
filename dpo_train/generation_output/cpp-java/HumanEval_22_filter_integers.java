### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> res;
    for (auto x : values) {
        if (x.type() == typeid(int)) {
            res.push_back(std::any_cast<int>(x));
        }
    }
    return res;
}

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> filterIntegers(ArrayList<Object> values) {
        ArrayList<Long> res = new ArrayList<>();
        for (auto x : values) {
            if (x.type() == typeid(int)) {
                res.add(std::any_cast<int>(x));
            }
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> values = new ArrayList<>();
        values.add(1);
        values.add(2);
        values.add(3);
        values.add(4);
        values.add(5);
        values.add(6);
        values.add(7);
        values.add(8);
        values.add(9);
        values.add(10);
        values.add(11);
        values.add(12);
        values.add(13);
        values.add(14);
        values.add(15);
        values.add(16);
        values.add(17);
        values.add(18);
        values.add(19);
        values.add(20);
        values.add(21);
        values.add(22);
        values.add(23);
        values.add(24);
        values.add(25);
        values.add(26);
        values.add(27);
        values.add(28);
        values.add(29);
        values.add(30);
        values.add(31);
        values.add(32);
        values.add(33);
        values.add(34);
        values.add(35);
        values.add(36);
        values.add(37);
        values.add(38);
        values.add(39);
        values.add(40);
        values.add(41);
        values.add(42);
        values.add(43);
        values.add(44);
        values.add(45);
        values.add(46);
        values.add(47);
        values.add(48);
        values.add(49);
        values.add(50);
        values.add(51);
        values.add(52);
        values.add(53);
        values.add(54);
        values.add(55);
        values.add(56);
        values.add(57);
        values.add(58);
        values.add(59);
        values.add(60);
        values.add(61);
        values.add(62);
        values.add(63);
        values.add(64);
        values.add(65);
        values.add(66);
        values.add(67);
        values.add(68);
        values.add(69);
        values.add(70);
        values.add(71);
        values.add(72);
        values.add(73);
        values.add(74);
        values.add(75);
        values.add(76);
        values.add(77);
        values.add(78);
        values.add(79);
        values.add(80);
        values.add(81);
        values.add(82);
        values.add(83);
        values.add(84);
        values.add(85);
        values.add(86