#include <iostream>

using namespace std;

int Patrat(int);

int Cub(int);

int main()
{
 	cout << "Patratul lui 27 este "  << Patrat(27) << endl;
 	
	cout << "si cubul lui 27 este " << Cub(27) << endl;
 
 	return 0;
}
int Patrat(int n)
{
 	return n*n;
}
int Cub(int n)
{
 	return n*n*n;
}
