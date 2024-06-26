#include <iostream>
#include <vector>
#include "Transaction.h"
#include "CryptoBlock.h"

using namespace std;

int main()
{
    CryptoBlockchain myChain;
    myChain.addNewBlock("John", "Bob", 10);
    myChain.addNewBlock("Bob", "Sandra", 15.5);
    cout << myChain;
    return 0;
}
