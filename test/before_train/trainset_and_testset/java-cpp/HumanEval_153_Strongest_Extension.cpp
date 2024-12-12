#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strong = "";
    int myVal = 0;
    for (std::string s : extensions) {
        int val = s.replaceAll("[^A-Z]", "").length() - s.replaceAll("[^a-z]", "").length();
        if (val > myVal) {
            strong = s;
            myVal = val;
        }
    }
    return class_name + "." + strong;
}
int main() {
    auto candidate = Strongest_Extension;
    assert(candidate(("Watashi"), (std::vector<std::string>({(std::string)"tEN", (std::string)"niNE", (std::string)"eIGHt8OKe"}))) == ("Watashi.eIGHt8OKe"));
    assert(candidate(("Boku123"), (std::vector<std::string>({(std::string)"nani", (std::string)"NazeDa", (std::string)"YEs.WeCaNe", (std::string)"32145tggg"}))) == ("Boku123.YEs.WeCaNe"));
    assert(candidate(("__YESIMHERE"), (std::vector<std::string>({(std::string)"t", (std::string)"eMptY", (std::string)"nothing", (std::string)"zeR00", (std::string)"NuLl__", (std::string)"123NoooneB321"}))) == ("__YESIMHERE.NuLl__"));
    assert(candidate(("K"), (std::vector<std::string>({(std::string)"Ta", (std::string)"TAR", (std::string)"t234An", (std::string)"cosSo"}))) == ("K.TAR"));
    assert(candidate(("__HAHA"), (std::vector<std::string>({(std::string)"Tab", (std::string)"123", (std::string)"781345", (std::string)"-_-"}))) == ("__HAHA.123"));
    assert(candidate(("YameRore"), (std::vector<std::string>({(std::string)"HhAas", (std::string)"okIWILL123", (std::string)"WorkOut", (std::string)"Fails", (std::string)"-_-"}))) == ("YameRore.okIWILL123"));
    assert(candidate(("finNNalLLly"), (std::vector<std::string>({(std::string)"Die", (std::string)"NowW", (std::string)"Wow", (std::string)"WoW"}))) == ("finNNalLLly.WoW"));
    assert(candidate(("_"), (std::vector<std::string>({(std::string)"Bb", (std::string)"91245"}))) == ("_.Bb"));
    assert(candidate(("Sp"), (std::vector<std::string>({(std::string)"671235", (std::string)"Bb"}))) == ("Sp.671235"));
}
