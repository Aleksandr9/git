// Najcz�stsza warto��
// Data:   4.05.3000
// (C)2012 mgr Jerzy Wa�aszek
//---------------------------

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
  const int N = 400;
  int Z[N],i,j,L,W,maxL,maxW;

// Generujemy zawarto�� Z[]

  srand((unsigned)time(NULL));
  for(i = 0; i < N; i++) Z[i] = rand() % 100;

// Wyszukujemy najcz�stsz� warto��

  maxL = 0;
  for(i = 0; i < N; i++)
  {
    W = Z[i]; L = 0;
    for(j = 0; j < N; j++) if(Z[j] == W) L++;
    if(L > maxL)
    {
      maxL = L; maxW = W;
    }
  }

// Wypisujemy tablic�

  for(i = 0; i < N; i++)
    if(Z[i] == maxW) cout << " >" << setw(2) << Z[i];
    else             cout << setw(4) << Z[i];

// Wypisujemy najcz�stszy element
// oraz liczb� wyst�pie�

  cout << endl << maxW << " : " << maxL << endl << endl;
  return 0;
}
