#pragma once
#include <string>
#include <stdexcept>

enum Lang {
	JAVA = 0,
	CPP = 1,
	PHP = 2,
	KOTLIN = 3
};

class CodeGenerator {
public:
	CodeGenerator() {}

	virtual ~CodeGenerator() {}

	std::string generateCode() {
		return "Result:\n" + someCodeRelatedThing();
	}
protected:
	virtual std::string someCodeRelatedThing() = 0;
};

class JavaCodeGenerator : public CodeGenerator {
public:
	JavaCodeGenerator() : CodeGenerator() {}

	virtual ~JavaCodeGenerator(){}

protected:
	std::string someCodeRelatedThing() override {
		return "Some java code";
	}
};

class CPPCodeGenerator : public CodeGenerator {
public:
	CPPCodeGenerator() : CodeGenerator() {}

	virtual ~CPPCodeGenerator() {}

protected:
	std::string someCodeRelatedThing() override {
		return "Some CPP code";
	}
};

class PHPCodeGenerator : public CodeGenerator {
public:
	PHPCodeGenerator() : CodeGenerator() {}

	virtual ~PHPCodeGenerator() {}

protected:
	std::string someCodeRelatedThing() override {
		return "Some php code";
	}
};

class KotlinCodeGenerator : public CodeGenerator {
public:
	KotlinCodeGenerator() : CodeGenerator() {}

	virtual ~KotlinCodeGenerator() {}

protected:
	std::string someCodeRelatedThing() override {
		return "Some kotlin code";
	}
};

CodeGenerator* codeFactory(enum Lang language) {
	switch (language) {
	case JAVA:return new JavaCodeGenerator();
	case CPP:return new CPPCodeGenerator();
	case PHP:return new PHPCodeGenerator();
	case KOTLIN:return new KotlinCodeGenerator();
	}
	throw std::logic_error("Bad language");
}