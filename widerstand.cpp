#include <iostream>
using namespace std;

int main()
{
  float spannung;
  float stromstaerke;
  float widerstand;

  cout<<"Bitte geben Sie die Spannung ein: ";
  cin>>spannung;
  cout<<"Bitte geben Sie die Stromstärke ein: ";
  cin>>stromstaerke;
  widerstand = spannung / stromstaerke;
  cout<<"Der Widerstand beträgt " << widerstand << " Ohm." << endl;
  return 0;
}
