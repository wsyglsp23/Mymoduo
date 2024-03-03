#pragma once
#include<iostream>
#include <nocpy.h>
#include<sys/time.h>
class Timestamp 
{
public:
    Timestamp();
    explicit Timestamp(int64_t microSecondsSinceEpoch);
    static Timestamp now();
    std::string toString() const;

private:
    int64_t microSecondsSinceEpoch_;
    static const int kMicroSecondsPerSecond = 1000 * 1000;

};