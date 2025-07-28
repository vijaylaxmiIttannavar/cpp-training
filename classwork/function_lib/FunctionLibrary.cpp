#include "FunctionLibrary.h"
#include <cmath>
#include <cstdlib>
#include <stdexcept>
#include <cctype>

// Dispatcher//
Value FunctionLibrary::callFunction(const std::string& name, const std::vector<Value>& args) {
    std::string funcName = toUpper(name);

    if (funcName == "ABS") return evalAbs(args);
    if (funcName == "SIN") return evalSin(args);
    if (funcName == "LEN") return evalLen(args);
    if (funcName == "LEFT$") return evalLeft(args);
    if (funcName == "RIGHT$") return evalRight(args);
    if (funcName == "INT") return evalInt(args);
    if (funcName == "RND") return evalRnd(args);
    if (funcName == "ASC") return evalAsc(args);
    if (funcName == "CHR$") return evalChr(args);

    throw std::runtime_error("Unknown function: " + name);
}

// Function Implementations

Value FunctionLibrary::evalAbs(const std::vector<Value>& args) {
    if (args.size() != 1)
        throw std::runtime_error("ABS expects 1 argument");
    if (args[0].getType() == ValueType::INT)
        return Value(std::abs(args[0].asInt()));
    if (args[0].getType() == ValueType::FLOAT)
        return Value(std::fabs(args[0].asFloat()));
    throw std::runtime_error("ABS only works on numbers");
}

Value FunctionLibrary::evalSin(const std::vector<Value>& args) {
    if (args.size() != 1)
        throw std::runtime_error("SIN expects 1 argument");
    if (args[0].getType() == ValueType::INT)
        return Value(std::sin(static_cast<float>(args[0].asInt())));
    if (args[0].getType() == ValueType::FLOAT)
        return Value(std::sin(args[0].asFloat()));
    throw std::runtime_error("SIN only works on numbers");
}

Value FunctionLibrary::evalLen(const std::vector<Value>& args) {
    if (args.size() != 1 || args[0].getType() != ValueType::STRING)
        throw std::runtime_error("LEN expects 1 string argument");
    return Value(static_cast<int>(args[0].asString().size()));
}

Value FunctionLibrary::evalLeft(const std::vector<Value>& args) {
    if (args.size() != 2 || args[0].getType() != ValueType::STRING || args[1].getType() != ValueType::INT)
        throw std::runtime_error("LEFT$ expects (string, int)");
    std::string s = args[0].asString();
    int n = args[1].asInt();
    if (n < 0) throw std::runtime_error("LEFT$: negative count");
    return Value(s.substr(0, std::min(n, (int)s.size())));
}

Value FunctionLibrary::evalRight(const std::vector<Value>& args) {
    if (args.size() != 2 || args[0].getType() != ValueType::STRING || args[1].getType() != ValueType::INT)
        throw std::runtime_error("RIGHT$ expects (string, int)");
    std::string s = args[0].asString();
    int n = args[1].asInt();
    if (n < 0) throw std::runtime_error("RIGHT$: negative count");
    return Value(s.substr(std::max(0, (int)s.size() - n)));
}

Value FunctionLibrary::evalInt(const std::vector<Value>& args) {
    if (args.size() != 1)
        throw std::runtime_error("INT expects 1 argument");
    if (args[0].getType() == ValueType::FLOAT)
        return Value(static_cast<int>(args[0].asFloat()));
    if (args[0].getType() == ValueType::INT)
        return args[0]; // Already integer
    throw std::runtime_error("INT only works on numbers");
}

Value FunctionLibrary::evalRnd(const std::vector<Value>& args) {
    if (!args.empty())
        throw std::runtime_error("RND expects no arguments");
    float r = static_cast<float>(std::rand()) / RAND_MAX;
    return Value(r);
}

Value FunctionLibrary::evalAsc(const std::vector<Value>& args) {
    if (args.size() != 1 || args[0].getType() != ValueType::STRING)
        throw std::runtime_error("ASC expects 1 string argument");
    std::string s = args[0].asString();
    if (s.empty()) throw std::runtime_error("ASC: empty string");
    return Value(static_cast<int>(s[0]));
}

Value FunctionLibrary::evalChr(const std::vector<Value>& args) {
    if (args.size() != 1 || args[0].getType() != ValueType::INT)
        throw std::runtime_error("CHR$ expects 1 int argument");
    char c = static_cast<char>(args[0].asInt());
    return Value(std::string(1, c));
}

// Utility: Convert string to uppercase 
std::string FunctionLibrary::toUpper(const std::string& s) {
    std::string upper;
    for (char c : s) upper += std::toupper(c);
    return upper;
}   

