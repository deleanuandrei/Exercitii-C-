#include "CryptoBlock.h"
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

CryptoBlock::CryptoBlock(int ix, string prevHash, string sender, string recipient, double quantity):tx(sender, recipient, quantity){
    index = ix;
    previousBlockHash = prevHash;
	//tx.getTxQuantity() = quantity;
	//getTx().getTxRecipient() = recipient;
	//getTx().getTxSender() = sender;
}//constructor
int CryptoBlock::getIndex(){
    return index;
}
string CryptoBlock::getTimeStamp(){
    return timeStamp;
}
string CryptoBlock::getPreviousBlockHash(){
    return previousBlockHask;
}
string CryptoBlock::getBlockHask(){
    return blockHash;
}
Transaction CryptoBlock:: getTx(){
    return tx;
}
string calculateHash() {
	hash<string> str_hash;
	return to_string(str_hash(timeStamp + previousBlockHash
		+ getTx().getTxSender() + getTx().getTxRecipient()
		+ to_string(getTx().getTxQuantity())));
}
string now() {
	time_t t = time(0);
	string str = ctime(&t);
	str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
	return str;
}
