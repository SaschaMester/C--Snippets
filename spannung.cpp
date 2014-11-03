#include <iostream>
using std::cin;

int widerstand;
int stromstaerke;
int spannung;

int main()
{
  std::cout<<"Bitte geben Sie den Widerstandswert ein: ";
  cin>>widerstand;
  std::cout<<"Bitte geben Sie die Stromstärke ein: ";
  cin>>stromstaerke;
  int spannung = widerstand * stromstaerke;
  std::cout<<"Die Spannung beträgt ";
  std::cout<<spannung;
  std::cout<<" Volt\n";
  return 0;
}
