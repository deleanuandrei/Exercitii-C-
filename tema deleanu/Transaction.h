#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>

using namespace std;

class Transaction{
public:
    Transaction (string , string , double );
    string getTxSender();//fct ii pentru fuctile membre
    string getTxRecipient();
    double getTxQuantity();
private:
    string txSender;//datele membre
    string txRecipient;
    double txQuantity;

};
#endif // TRANSACTION_H
