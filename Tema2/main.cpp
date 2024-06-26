#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    ifstream date("Salary_Data.csv");

    float an, salariu;
    float anTotal = 0, salariuTotal = 0;

    string Coloana1, Coloana2;
    date >> Coloana1 >> Coloana2;
    date.ignore();

    int k = 0;
    float anMediu = 0, salariuMediu = 0;
    while(!date.eof())
    {
        if (date >> an >> salariu)
        {
            anTotal = anTotal + an;
            salariuTotal = salariuTotal + salariu;
            k++;
        }
    }

    anMediu = anTotal / k;
    salariuMediu = salariuTotal / k;

    float w1 = 0, w2 = 0;
    float x = 0, y = 0;
    date.close();

    ifstream f("Salary_Data.csv");

    string Coloana3, Coloana4;
    f >> Coloana3 >> Coloana4;
    f.ignore();

    float sumaNumarator = 0, sumaNumitor = 0;
    for(int i = 1; i <= k; i++)
    {
        f >> an >> salariu;
        x = an - anMediu;
        y = salariu - salariuMediu;
        sumaNumarator = sumaNumarator  + x*y;
        sumaNumitor = sumaNumitor + pow(x,2);

    }
    w2 = sumaNumarator / sumaNumitor;
    w1 = salariuMediu - w2*anMediu;

    cout << " w2= "<<w2<<endl;
    cout << " w1= " << w1;

    return 0;
}
