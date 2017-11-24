// Wyszukiwanie lidera
// Data:   4.11.2017
// (C)2012 mgr Jerzy Wa³aszek
//---------------------------

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 80;

int main()
{
  int Z[N],i,L,W;
  bool t;

  srand((unsigned)time(NULL));

  // Tu jakaś tablica

  W = rand() % 100;
  for(i = 0; i < N; i++)
    if(rand() % 2) Z[i] = rand() % 100;
    else           Z[i] = W;

  // Tu bylo szukanie lidera

  L = 0;
  for(i = 0; i < N; i++)
    if(!L)
    {
      W = Z[i]; L = 1;
    }
    else if(W == Z[i]) L++;
         else          L--;

  // Sprawdzamy, czy mamy lidera

  if(!L) t = false;
  else
  {
    L = 0;
    for(i = 0; i < N; i++) if(W == Z[i]) L++;
    t = L > N / 2;
  }

  // Wyœwietlamy tablicê

  for(i = 0; i < N; i++)
    if(t && (Z[i] == W)) cout << " >" << setw(2) << Z[i];
    else                 cout << setw(4) << Z[i];

  // Wyœwietlamy wyniki

  cout << endl;
  if(t) cout << W << " : " << L << endl;
  else  cout << "BRAK LIDERA\n";
  cout << endl;
  return 0;
}
