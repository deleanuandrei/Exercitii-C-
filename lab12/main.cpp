#include<iostream>
using namespace std;
#include <map>
int main()
{
 	map<string,int>clasa;
 	clasa.insert( pair<string,int>("David", 2.7) );
 	clasa.insert( pair<string,int>("Varona", 9.8) );
 	clasa.insert( pair<string,int>("Vlad", 5.6) );
 	clasa.insert( pair<string,int>("Andrei", 10) );
 	clasa.insert( pair<string,int>("Ionescu", 10) );
 	cout << "CLASA contine:\nCheie\tValoare\n";
 	map<string,int>::iterator iter;
 	for(iter = clasa.begin(); iter != clasa.end(); ++iter)
 	cout << iter->first << '\t'<< iter->second << '\n';
 	
 	
 	return 0;
}

