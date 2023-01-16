#include<stdio.h>
#include<string.h>

int main () {
  printf("Gebe eine Zahl ein (Zahl ist ein Produkt aus der Produktpalette) von 1-4\n");
  int zahl; 
  scanf("%d", &zahl);
  
  //Produktname
  char* Produktname [4];
  Produktname [0] = "Twix"; 
  Produktname [1] = "Mars"; 
  Produktname [2] = "Snickers"; 
  Produktname [3] = "Bounty";  

  //Packungsgröße in Gramm
  float Packungsgröße [4]; 
  Packungsgröße [0] = 200; 
  Packungsgröße [1] = 350; 
  Packungsgröße [2] = 300;
  Packungsgröße [3] = 150; 

 // Preis in Euro
  float Preis [4]; 
  Preis [0] = 2; 
  Preis [1] = 2.5;
  Preis [2] = 2.6; 
  Preis [3] = 2.9; 

// Preis pro Kg (netto)
float preisprokgnetto;
preisprokgnetto = Preis [zahl-1] / (Packungsgröße [zahl-1] / 1000); 

//Preis pro Kg (brutto)
float preisprokgbrutto; 
  preisprokgbrutto = Preis [zahl-1] / (Packungsgröße [zahl-1] / 1000) * 1.07; 

//Ausgabe der Liste 
printf("%s %.01f€ %.02f€/kg %.02f€/kg", Produktname[zahl-1], Preis [zahl-1], preisprokgnetto, preisprokgbrutto);

return 0; 
}