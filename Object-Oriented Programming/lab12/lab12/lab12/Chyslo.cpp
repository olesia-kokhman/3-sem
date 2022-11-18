#include "Chyslo.h"
#include <sstream>
std::string Chyslo::getValue() {
	return value;
}
Chyslo::Chyslo(std::string value, std::string type) {
	this->value = value;
	this->type = type;
}
bool Chyslo::isBinary() {
    bool flag = true;
    for (int i = 0; i < value.size(); i++) {
        if (value[i] != '1' && value[i] != '0') {
            flag = false;
        }
    }
	return type == "binary" && flag;
}
bool Chyslo::isDecimal() {
    return type == "decimal" && (value[0] == '-' || value.substr(0, 1)
        .find_first_not_of("0123456789") == std::string::npos) && value
        .substr(1, value.length()).find_first_not_of("0123456789") == std::string::npos;
}
bool Chyslo::isHex() {
    int n = value.length();
    if (n == 0) {
        return false;
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        char ch = value[i];
        if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'F')) {
            flag = false;
        }
    }
	return type == "hex" && flag;
}
Chyslo Chyslo::convertToBinary() {
    if (isBinary())
        return *this;
    if (isHex()) {
        std::string bin;
        for (unsigned i = 0; i != value.length(); ++i)
            bin += hexCharToBinary(value[i]);
        return Chyslo(bin, "binary");
    }
    if (isDecimal()) {
        int decimal = stoi(value);
        if (decimal < 0)
            throw NegativeBinaryNotSupportedException();
        int binary = 0, remainder, product = 1;
        while (decimal != 0) {
            remainder = decimal % 2;
            binary = binary + (remainder * product);
            decimal = decimal / 2;
            product *= 10;
        }
        return Chyslo(std::to_string(binary), "binary");
    }
}
Chyslo Chyslo::convertToHex() {
    if (isHex())
        return *this;
    if (isBinary()) {
        std::stringstream res;
        res << std::hex << stoi(value);
        return Chyslo(res.str(), "hex");
    }
    if (isDecimal()) {
        std::stringstream ss;
        ss << std::hex << stoi(value);
        std::string res(ss.str());
        return Chyslo(res, "hex");
    }
}
Chyslo Chyslo::convertToDecimal() {
    if (isDecimal())
        return *this;
    if (isBinary()) {
        int dec = 0, i = 0, rem;
        int n = stoi(value);
        while (n != 0) {
            rem = n % 10;
            n /= 10;
            dec += rem * pow(2, i);
            ++i;
        }
        return Chyslo(toStandardString(dec.ToString()), "decimal");
    }
    if (isHex()) {
        int result;
        std::stringstream ss;
        ss << std::hex << value;
        ss >> result;
        return Chyslo(toStandardString(result.ToString()), "decimal");
    }
}
const char* Chyslo::hexCharToBinary(char c) {
    switch (toupper(c)) {
    case '0': return "0000";
    case '1': return "0001";
    case '2': return "0010";
    case '3': return "0011";
    case '4': return "0100";
    case '5': return "0101";
    case '6': return "0110";
    case '7': return "0111";
    case '8': return "1000";
    case '9': return "1001";
    case 'A': return "1010";
    case 'B': return "1011";
    case 'C': return "1100";
    case 'D': return "1101";
    case 'E': return "1110";
    case 'F': return "1111";
    }
}
std::string Chyslo::toStandardString(System::String^ string) {
    using System::Runtime::InteropServices::Marshal;
    System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
    char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
    std::string returnString(charPointer, string->Length);
    Marshal::FreeHGlobal(pointer);
    return returnString;
}
void Chyslo::checkOverflow(long long value) {
    if (value > INT_MAX) {
        throw OverFlowChysloException();
    }
}
Chyslo Chyslo::add(Chyslo chyslo) {
    if (isBinary()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) + stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToBinary();
    }
    if (isDecimal()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(value) + stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal");
    }
    if (isHex()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) + stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToHex();
    }
}
Chyslo Chyslo::multiply(Chyslo chyslo) {
    if (isBinary()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) * stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToBinary();
    }
    if (isDecimal()) {
        auto result = stoll(getValue()) * stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal");
    }
    if (isHex()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) * stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToHex();
    }
}
Chyslo Chyslo::minus(Chyslo chyslo) {
    if (isBinary()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) - stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToBinary();
    }
    if (isDecimal()) {
        auto result = stoll(getValue()) - stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal");
    }
    if (isHex()) {
        chyslo = chyslo.convertToDecimal();
        auto result = stoll(convertToDecimal().getValue()) - stoll(chyslo.getValue());
        checkOverflow(result);
        return Chyslo(toStandardString(result.ToString()), "decimal").convertToHex();
    }
}
