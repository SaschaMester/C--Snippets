#include <iostream>
using namespace std;

int main()
{
  int widerstand;
  int stromstaerke;
  int spannung; 
  cout<<"Bitte geben Sie den Widerstandswert ein: ";
  cin>>widerstand;
  cout<<"Bitte geben Sie die Stromstärke ein: ";
  cin>>stromstaerke;
  spannung = widerstand * stromstaerke;
  cout<<"Die Spannung beträgt " << spannung << " Volt." << endl;
  return 0;
}
