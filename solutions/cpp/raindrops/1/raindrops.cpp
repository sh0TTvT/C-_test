#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(int number) {
    std::string result;
    
    // 检查是否能被3整除，添加对应的声音
    if (number % 3 == 0) {
        result += "Pling";
    }
    
    // 检查是否能被5整除，添加对应的声音
    if (number % 5 == 0) {
        result += "Plang";
    }
    
    // 检查是否能被7整除，添加对应的声音
    if (number % 7 == 0) {
        result += "Plong";
    }
    
    // 如果没有匹配的除数，返回数字的字符串形式
    if (result.empty()) {
        result = std::to_string(number);
    }
    
    return result;
}

}  // namespace raindrops
