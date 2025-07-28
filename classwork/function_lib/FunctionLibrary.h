#pragma once
#include "TypeSystem.h"
#include <string>
#include <vector>

class FunctionLibrary {
public:
    Value callFunction(const std::string& name, const std::vector<Value>& args);

private:
    Value evalAbs(const std::vector<Value>& args);
    Value evalSin(const std::vector<Value>& args);
    Value evalLen(const std::vector<Value>& args);
    Value evalLeft(const std::vector<Value>& args);
    Value evalRight(const std::vector<Value>& args);
    Value evalInt(const std::vector<Value>& args);
    Value evalRnd(const std::vector<Value>& args);
    Value evalAsc(const std::vector<Value>& args);
    Value evalChr(const std::vector<Value>& args);

    std::string toUpper(const std::string& s);
};
*
