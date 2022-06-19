#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

enum Lang {
    cpp = 0,
    java = 1,
    php = 2,
    python = 3
};

class CodeGenerator
{
public:
    class CodeGenerator
    ()
    {

    }

    virtual ~CodeGenerator()
    {
        
    }

    string generateSomeCodeRelatedThing() {
        return "Result:\n" +someCodeRelatedThing();
    }
    string generateSomeCodeRelatedStuff() {
        return "Result:\n" + someCodeRelatedStuff();
    }

protected:
    virtual string someCodeRelatedThing() = 0;
    virtual string someCodeRelatedStuff() = 0;
};

class CPP : public CodeGenerator
{
public:
    CPP() : CodeGenerator()
    {

    }

    virtual ~CPP()
    {

    }
protected:

    string someCodeRelatedThing() override
    {
        return "C++ thing";
    }

    string someCodeRelatedStuff() override
    {
        return "C++ stuff";
    }

};

class Java : public CodeGenerator
{
public:
    Java() : CodeGenerator()
    {

    }

    virtual ~Java()
    {

    }

protected:
    string someCodeRelatedThing() override
    {
        return "java thing";
    }

    string someCodeRelatedStuff() override
    {
        return "java stuff";
    }
};



class PHP : public CodeGenerator
{
public:
    PHP() : CodeGenerator()
    {

    }

    virtual ~PHP()
    {

    }
protected:
    string someCodeRelatedThing() override
    {
        return "PHP thing";
    }

    string someCodeRelatedStuff() override
    {
        return "PHP stuff";
    }
};

class Python : public CodeGenerator
{
public:
    Python() : CodeGenerator()
    {

    }

    
    virtual ~Python()
    {

    }
protected:
    string someCodeRelatedThing() override
    {
        return "Python thing";
    }

    string someCodeRelatedStuff() override
    {
        return "Python stuff";
    }

};

CodeGenerator* codeFactory(enum Lang language) {
    switch (language) 
    {
        case cpp:   return new CPP();
        case java:  return new Java();
        case php:   return new PHP();
        case python:return new Python();
    }
    throw std::logic_error("Bad language");
}