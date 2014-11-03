#include <iostream>
using namespace std;

int main()
{
  float spannung;
  float widerstand;
  float stromstaerke;

  cout<<"Bitte geben Sie die Spannung ein: ";
  cin>>spannung;
  cout<<"Bitte geben Sie den Widerstand ein: ";
  cin>>widerstand;
  stromstaerke = spannung / widerstand;
  cout<<"Die Stromstärke beträgt " << stromstaerke << " Ampère." << endl;
  return 0;
}
