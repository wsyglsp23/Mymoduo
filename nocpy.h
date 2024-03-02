#pragma once


namespace muduo{
class nocpy
{

public:
    nocpy(const nocpy&) = delete;
    void operator=(const nocpy&) =delete;

protected:
    nocpy() = default;
    ~nocpy() = default;

};
}

