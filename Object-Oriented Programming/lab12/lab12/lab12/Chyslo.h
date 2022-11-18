#ifndef CHYSLO_H
#define CHYSLO_H
#pragma once
#include <string>
class OverFlowChysloException : public std::exception {
};
class NegativeBinaryNotSupportedException : public std::exception {
};
class Chyslo {
	private:
		std::string value;
		std::string type;
		const char* hexCharToBinary(char c);
		void checkOverflow(long long value);
	public:
		Chyslo(std::string value, std::string type);
		Chyslo convertToDecimal();
		Chyslo convertToHex();
		Chyslo convertToBinary();
		Chyslo add(Chyslo chyslo);
		Chyslo multiply(Chyslo chyslo);
		Chyslo minus(Chyslo chyslo);
		std::string getValue();
		bool isDecimal();
		bool isHex();
		bool isBinary();
		static std::string toStandardString(System::String^ string);
};
#endif

