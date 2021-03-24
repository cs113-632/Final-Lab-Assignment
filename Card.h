#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
private:
    std::string color;
    int amount;
    int date;

public:
    Card(std::string color, int amount, int date);
    void deposit(int num);
    void withdraw(int num);
};

#endif