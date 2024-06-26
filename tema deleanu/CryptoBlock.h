#ifndef CRYPTOBLOCK_H
#define CRYPTOBLOCK_H
#include <string>
#include "Transaction.h"
#include <ctime>
#include <algorithm>

using namespace std;

class CryptoBlock
{
public:
    CryptoBlock (int ix, string prevHash, string sender, string recipient, double quantity);
    int getIndex();//pentru date membre fuctia get
    string getTimeStamp();
    string getPreviousBlockHash();
    string getBlockHask();
    Transaction getTx();
private:
    /*string calculateHash()
    {
        hash<string> str_hash;
        return to_string(str_hash(timeStamp + previousBlockHash
                                  + getTx().getTxSender() + getTx().getTxRecipient()
                                  + to_string(getTx().getTxQuantity())));
    }
    string now()
    {
        time_t t = time(0);
        string str = ctime(&t);
        str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
        return str;
    }*/
    int index;//date membre
    string timeStamp;
    string previousBlockHash;
    string blockHash;
    Transaction tx;
};
#endif // TRANSACTION_H

