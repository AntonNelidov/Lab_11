#include <iostream>
#include "CodeGenerator.h"


int main()
{
    CodeGenerator* cpp_code = codeFactory(cpp);
    cout << cpp_code->generateSomeCodeRelatedThing() << endl;
    cout << cpp_code->generateSomeCodeRelatedStuff() << endl;

    delete cpp_code;

    CodeGenerator* python_code = codeFactory(python);
    cout << python_code->generateSomeCodeRelatedThing() << endl;
    cout << python_code->generateSomeCodeRelatedStuff() << endl;

    delete python_code;

	return 0;
}