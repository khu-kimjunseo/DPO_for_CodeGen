#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> eat(long number, long need, long remaining) {
    if(need <= remaining){
        return { number + need , remaining-need };
    } else{
        return { number + remaining , 0};
    }
}
