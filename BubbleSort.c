#include <stdio.h>
#include <stdbool.h>
int main()
{
  int Arr [7] = {9,7,3,1,8,6,0};
  int auxiliar;
  bool rotacion = true;
  int x, i, j;
  for (x = 0; x < 7 ; x ++)
  {
      printf("%d ,", Arr[x]);
  }
  printf ("\n");
  while(0 < 1)
  {
      rotacion = true;
      for (i = 1; i < 7; i++)
      {
          if (Arr[i] < Arr[i - 1])
          {
              auxiliar = Arr[i];
              Arr[i] = Arr[i - 1];
              Arr[i - 1] = auxiliar;
              rotacion = false;
          }
      }
      if (rotacion == true)
      {
          break;
      }
  }
  for (j = 0; j < 7 ; j++)
  {
      printf ("%d ,", Arr[j]);
  }

  return 0;
}
