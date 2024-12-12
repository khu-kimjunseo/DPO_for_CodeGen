### Python version

def fix_spaces(text: str) -> str:
    new_text = ""
    i = 0
    start, end = 0, 0
    while i < len(text):
        if text[i] == " ":
            end += 1
        else:
            if end - start > 2:
                new_text += "-"+text[i]
            elif end - start > 0:
                new_text += "_"*(end - start)+text[i]
            else:
                new_text += text[i]
            start, end = i+1, i+1
        i+=1
    if end - start > 2:
        new_text += "-"
    elif end - start > 0:
        new_text += "_"
    return new_text

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
std::string fix_spaces(std::string text) {
    std::stringstream ss;
    std::stringstream ss2;
    std::stringstream ss3;
    std::stringstream ss4;
    std::stringstream ss5;
    std::stringstream ss6;
    std::stringstream ss7;
    std::stringstream ss8;
    std::stringstream ss9;
    std::stringstream ss10;
    std::stringstream ss11;
    std::stringstream ss12;
    std::stringstream ss13;
    std::stringstream ss14;
    std::stringstream ss15;
    std::stringstream ss16;
    std::stringstream ss17;
    std::stringstream ss18;
    std::stringstream ss19;
    std::stringstream ss20;
    std::stringstream ss21;
    std::stringstream ss22;
    std::stringstream ss23;
    std::stringstream ss24;
    std::stringstream ss25;
    std::stringstream ss26;
    std::stringstream ss27;
    std::stringstream ss28;
    std::stringstream ss29;
    std::stringstream ss30;
    std::stringstream ss31;
    std::stringstream ss32;
    std::stringstream ss33;
    std::stringstream ss34;
    std::stringstream ss35;
    std::stringstream ss36;
    std::stringstream ss37;
    std::stringstream ss38;
    std::stringstream ss39;
    std::stringstream ss40;
    std::stringstream ss41;
    std::stringstream ss42;
    std::stringstream ss43;
    std::stringstream ss44;
    std::stringstream ss45;
    std::stringstream ss46;
    std::stringstream ss47;
    std::stringstream ss48;
    std::stringstream ss49;
    std::stringstream ss50;
    std::stringstream ss51;
    std::stringstream ss52;
    std::stringstream ss53;
    std::stringstream ss54;
    std::stringstream ss55;
    std::stringstream ss56;
    std::stringstream ss57;
    std::stringstream ss58;
    std::stringstream ss59;
    std::stringstream ss60;
    std::stringstream ss61;
    std::stringstream ss62;
    std::stringstream ss63;
    std::stringstream ss64;
    std::stringstream ss65;
    std::stringstream ss66;
    std::stringstream ss67;
    std::stringstream ss68;
    std::stringstream ss69;
    std::stringstream ss70;
    std::stringstream ss71;
    std::stringstream ss72;
    std::stringstream ss73;
    std::stringstream ss74;
    std::stringstream ss75;
    std::stringstream ss76;
    std::stringstream ss77;
    std::stringstream ss78;
    std::stringstream ss79;
    std::stringstream ss80;
    std::stringstream ss81;
    std::stringstream ss82;
    std::