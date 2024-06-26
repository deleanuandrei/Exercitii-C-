#include "CryptoBlockchain.h"
#include <iostream>

using namespace std;

CryptoBlockchain::CryptoBlock(0, "0", ",", ",", 0)
{
    chain.push_back(CryptoBlock(0, "0", ",", ",", 0));
}// constructor care formeaza un bloc de la 0
void CryptoBlockchain:: addNewBlock(string sender, string recipient, double qunatity)
{
    chain.push_back(CryptoBlock(getLastIndex(), getLastHash, sender, recipient, quantity));
}
vector<CryptoBlock> getChain()
{
    return chain;
}
ostream& operator<<(ostream&o, CryptoBlock& b){
    o<<"{" << endl << "BlockID:" <<b.getIndex();
    return o;
}
ostream& operator<<(ostream& o, CryptoBlockchain& bc){//supraincarcarea parametrilor
    for(int i=0; i<bc.chain.size();i++){
        o << bc.chain[i];
    }
}
