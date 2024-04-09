#pragma once
#include<iostream>
#include<sys/time.h>
#include"nocpy.h"
//时间类
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