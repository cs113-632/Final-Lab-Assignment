#include "Card.h"
#include <string>

Card::Card(std::string color, int amount, int date){
    this->color = color;
    this->amount = amount;
    this->date = date;
}

void Card::deposit(int num){
    this->amount = this->amount + num;
}

void Card::withdraw(int num){
    this->amount = this->amount - num;
}

