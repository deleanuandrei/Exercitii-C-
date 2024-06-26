#include <iostream>

using namespace std;

float convert_leu_to_euro (int leu, float currency);
float convert_euro_to_leu (int euro, float currency);

int main()
{
	int leu=53;
	float currency_euro=4.4;
	cout<<leu<<"lei = "<< convert_leu_to_euro(leu, currency_euro)<<"euro: "<<endl;
	
	int euro=50;
	cout<<euro<<"euro= "<<convert_euro_to_leu(euro, currency_euro)<< "lei: "<<endl;
	
	return 0;
}

float convert_leu_to_euro (int leu, float currency)
{
	return leu/currency;
	
}

float convert_euro_to_leu (int euro, float currency)
{
	return euro*currency;
	
}

