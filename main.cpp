#include <iostream>
#include "CodeGenerator.h"

int main() {
	CodeGenerator* code = codeFactory(JAVA);
	std::cout << code->generateCode() << std::endl;

	delete code;
	return 0;
}