#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long do_algebra(std::vector<std::string> op, std::vector<long> operand) {
    std::stringstream ss;
    ss << op[0] << " " << operand[0] << " " << op[1] << " " << operand[1] << " " << op[2] << " " << operand[2] << " " << op[3] << " " << operand[3] << " " << op[4] << " " << operand[4] << " " << op[5] << " " << operand[5] << " " << op[6] << " " << operand[6] << " " << op[7] << " " << operand[7] << " " << op[8] << " " << operand[8] << " " << op[9] << " " << operand[9] << " " << op[10] << " " << operand[10] << " " << op[11] << " " << operand[11] << " " << op[12] << " " << operand[12] << " " << op[13] << " " << operand[13] << " " << op[14] << " " << operand[14] << " " << op[15] << " " << operand[15] << " " << op[16] << " " << operand[16] << " " << op[17] << " " << operand[17] << " " << op[18] << " " << operand[18] << " " << op[19] << " " << operand[19] << " " << op[20] << " " << operand[20] << " " << op[21] << " " << operand[21] << " " << op[22] << " " << operand[22] << " " << op[23] << " " << operand[23] << " " << op[24] << " " << operand[24] << " " << op[25] << " " << operand[25] << " " << op[26] << " " << operand[26] << " " << op[27] << " " << operand[27] << " " << op[28] << " " << operand[28] << " " << op[29] << " " << operand[29] << " " << op[30] << " " << operand[30] << " " << op[31] << " " << operand[31] << " " << op[32] << " " << operand[32] << " " << op[33] << " " << operand[33] << " " << op[34] << " " << operand[34] << " " << op[35] << " " << operand[35] << " " << op[36] << " " << operand[36] << " " << op[37] << " " << operand[37] << " " << op[38] << " " << operand[38] << " " << op[39] << " " << operand[39] << " " << op[40] << " " << operand[40] << " " << op[41] << " " << operand[41] << " " << op[42] << " " << operand[42] << " " << op[43] << " " << operand[43] << " " << op[44] << " " << operand[44] << " " << op[45] << " " << operand[45] << " " << op[46] << " " << operand[46] << " " << op[47] << " " << operand[47] << " " << op[48] << " " << operand
}
int main() {
    auto candidate = do_algebra;
    assert(candidate((std::vector<std::string>({(std::string)"**", (std::string)"*", (std::string)"+"})), (std::vector<long>({(long)2, (long)3, (long)4, (long)5}))) == (37));
    assert(candidate((std::vector<std::string>({(std::string)"+", (std::string)"*", (std::string)"-"})), (std::vector<long>({(long)2, (long)3, (long)4, (long)5}))) == (9));
    assert(candidate((std::vector<std::string>({(std::string)"//", (std::string)"*"})), (std::vector<long>({(long)7, (long)3, (long)4}))) == (8));
}
