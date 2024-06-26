#include<iostream>

using namespace std;

#include"punct.h"
#include "cerc.h"
#include "cilindru.h"

int main()
{  
  cilindru cilind(5.7, 2.5, 12, 23);  
  
  cout << "Coordonata X este " << cilind.getX()       
       << "\nCoordonata Y este " << cilind.getY()       
	   << "\nRaza este " << cilind.getRadius()       
	   << "\nInaltimea este " << cilind.getHeight() << "\n\n";  
  
  cilind.setHeight(10);  
  cilind.setRadius(4.25);  
  cilind.setPoint(2, 2);  
  cout << "Noua pozitie, raza si inaltimea cilindrului este:\n"       
       << cilind << '\n';  
	   
  cout << "Aria cilindrului este: " << cilind.aria() << '\n'; 
  
  punct& pct = cilind;  
  cout << "\nCilindrul tiparit ca un punct este: "       
       << pct << "\n\n";  
	   
  cerc& cr = cilind;  
  cout << "Cilindrul tiparit ca un cerc este:\n" << cr << "\nAria: " << cr.aria() << endl;  
	   
  return 0;
}
