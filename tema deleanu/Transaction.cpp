#include "Transaction.h"
#include <iostream>
#include <string>

using namespace std;

Transaction::Transaction(string sender, string recipient, double quantity){
    txSender = sender;
    txRecipient = recipient;
    txQuantity = quantity;
}//constructor
string Transaction::getTxSender(){
    return txSender;
}
string Transaction::getTxRecipient(){
    return txRecipient;
}
double Transaction::getTxQuantity(){
    return txQuantity;
}
