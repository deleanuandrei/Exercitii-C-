#ifndef CRYPTOBLOCKCHAIN_H
#define CRYPTOBLOCKCHAIN_H
#include "CryptoBlock.h"
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CryptoBlockchain:public CryptoBlock{
public:
    friend ostream& operator<<(ostream& o, CryptoBlockchain& bc);
    CryptoBlockchain();
    void addNewBlock(string sender, string recipient, double quantity);
    vector<CryptoBlock> getChain();
private://fuctii care intorc parametri de la ultimul bloc
    string getLastHash(){
        string last;
        for(int i = 0; i<chain.size();i++){
            last = chain[i].getBlockHash()
        }
        return last;
    }
    int getLastIndex(){
        int first;
        for(int i = 0; i<chain.size(); i++){
            first= chain[i].getIndex()+1;
        }
        return first;
    }
    vector<CryptoBlock> chain;
};

#endif // CRYPTOBLOCKCHAIN_H
