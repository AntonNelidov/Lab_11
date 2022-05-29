#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseLanguage
{
public:
    class BaseLanguage
    ()
    {

    }

    virtual string someCodeRelatedThing() = 0;
    virtual string someCodeRelatedStuff() = 0;

    virtual ~BaseLanguage()
    {
        
    }
};

class CPP : public BaseLanguage
{
public:
    CPP() : BaseLanguage()
    {

    }

    string someCodeRelatedThing() override
    {
        return "C++ thing";
    }

    string someCodeRelatedStuff() override
    {
        return "C++ stuff";
    }

    virtual ~CPP()
    {

    }
protected:
};

class Java : BaseLanguage
{
public:
    Java() : BaseLanguage()
    {

    }

    string someCodeRelatedThing() override
    {
        return "java thing";
    }

    string someCodeRelatedStuff() override
    {
        return "java stuff";
    }

    virtual ~Java()
    {

    }

protected:
};



class PHP : public BaseLanguage
{
public:
    PHP() : BaseLanguage()
    {

    }

    string someCodeRelatedThing() override
    {
        return "PHP thing";
    }

    string someCodeRelatedStuff() override
    {
        return "PHP stuff";
    }

    virtual ~PHP()
    {

    }
protected:
};

class Python : public BaseLanguage
{
public:
    Python() : BaseLanguage()
    {

    }

    string someCodeRelatedThing() override
    {
        return "C++ thing";
    }

    string someCodeRelatedStuff() override
    {
        return "C++ stuff";
    }

    virtual ~Python()
    {

    }
protected:
};