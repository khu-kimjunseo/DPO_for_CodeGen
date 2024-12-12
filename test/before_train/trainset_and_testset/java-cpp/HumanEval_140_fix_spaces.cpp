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
    std::string newText = "";
    int i = 0;
    int start = 0, end = 0;
    while (i < text.length()) {
        if (text.charAt(i) == ' ') {
            end++;
        } else {
            if (end - start > 2) {
                newText += "-"+text.charAt(i);
            } else if (end - start > 0) {
                newText += "_".repeat(end - start)+text.charAt(i);
            } else {
                newText += text.charAt(i);
            }
            start = i+1; end = i+1;
        }
        i++;
    }
    if (end - start > 2) {
        newText += "-";
    } else if (end - start > 0) {
        newText += "_";
    }
    return newText;
}
int main() {
    auto candidate = fix_spaces;
    assert(candidate(("Example")) == ("Example"));
    assert(candidate(("Mudasir Hanif ")) == ("Mudasir_Hanif_"));
    assert(candidate(("Yellow Yellow  Dirty  Fellow")) == ("Yellow_Yellow__Dirty__Fellow"));
    assert(candidate(("Exa   mple")) == ("Exa-mple"));
    assert(candidate(("   Exa 1 2 2 mple")) == ("-Exa_1_2_2_mple"));
}
