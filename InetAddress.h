
#pragma once
#include<arpa/inet.h>
#include<netinet/in.h>
#include<iostream>
class InetAddress
{

public:
    explicit InetAddress(uint16_t port, std::string ip = "127.0.0.1");
    explicit InetAddress(const sockaddr_in &addr_);
    std::string toIp() const;
    std::string toIpPort() const;
    uint16_t toPort() const;
private:
    sockaddr_in addr_;
};