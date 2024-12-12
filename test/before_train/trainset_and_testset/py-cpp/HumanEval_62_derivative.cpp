#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> derivative(std::vector<long> xs) {
    std::vector<long> res;
    std::unordered_map<long, long> m;
    std::unordered_set<long> s;
    std::map<long, long> m2;
    std::set<long> s2;
    std::stringstream ss;
    std::regex rx("[0-9]+");
    std::regex rx2("[0-9]+");
    std::regex rx3("[0-9]+");
    std::regex rx4("[0-9]+");
    std::regex rx5("[0-9]+");
    std::regex rx6("[0-9]+");
    std::regex rx7("[0-9]+");
    std::regex rx8("[0-9]+");
    std::regex rx9("[0-9]+");
    std::regex rx10("[0-9]+");
    std::regex rx11("[0-9]+");
    std::regex rx12("[0-9]+");
    std::regex rx13("[0-9]+");
    std::regex rx14("[0-9]+");
    std::regex rx15("[0-9]+");
    std::regex rx16("[0-9]+");
    std::regex rx17("[0-9]+");
    std::regex rx18("[0-9]+");
    std::regex rx19("[0-9]+");
    std::regex rx20("[0-9]+");
    std::regex rx21("[0-9]+");
    std::regex rx22("[0-9]+");
    std::regex rx23("[0-9]+");
    std::regex rx24("[0-9]+");
    std::regex rx25("[0-9]+");
    std::regex rx26("[0-9]+");
    std::regex rx27("[0-9]+");
    std::regex rx28("[0-9]+");
    std::regex rx29("[0-9]+");
    std::regex rx30("[0-9]+");
    std::regex rx31("[0-9]+");
    std::regex rx32("[0-9]+");
    std::regex rx33("[0-9]+");
    std::regex rx34("[0-9]+");
    std::regex rx35("[0-9]+");
    std::regex rx36("[0-9]+");
    std::regex rx37("[0-9]+");
    std::regex rx38("[0-9]+");
    std::regex rx39("[0-9]+");
    std::regex rx40("[0-9]+");
    std::regex rx41("[0-9]+");
    std::regex rx42("[0-9]+");
    std::regex rx43("[0-9]+");
    std::regex rx44("[0-9]+");
    std::regex rx45("[0-9]+");
    std::regex rx46("[0-9]+");
    std::regex rx47("[0-9]+");
    std::regex rx48("[0-9]+");
    std::regex rx49("[0-9]+");
    std::regex rx50("[0-9]+");
    std::regex rx51("[0-
}
int main() {
    auto candidate = derivative;
    assert(candidate((std::vector<long>({(long)3, (long)1, (long)2, (long)4, (long)5}))) == (std::vector<long>({(long)1, (long)4, (long)12, (long)20})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (std::vector<long>({(long)2, (long)6})));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)1}))) == (std::vector<long>({(long)2, (long)2})));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)1, (long)0, (long)4}))) == (std::vector<long>({(long)2, (long)2, (long)0, (long)16})));
    assert(candidate((std::vector<long>({(long)1}))) == (std::vector<long>()));
}
