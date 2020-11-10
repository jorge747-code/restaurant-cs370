//
// Created by nt101 on 11/2/2020.
//

#ifndef CS370_TABLE_HPP
#define CS370_TABLE_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "Pair.hpp"
#include "Party.hpp"

class Table {
public:
    Table();
    std::string _status();
    int _nbr();
    int _seats();
    void setStatus(std::string);

private:
    std::string status;
    int nbr, seats;
    bool cachedStatus, cachedNbr, cachedSeats;
    Party *party;
};


#endif //CS370_TABLE_HPP