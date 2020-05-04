#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstring>
using namespace std;

main(){
    int i, j, a, k, m;
    char nm[10][20], temp[100];
	  cout<<"INPUTKAN 6 KARAKTER\n\n";
 
    for (i=1;i<=6;i++)
     { cout<<"Input karakter ke-"<<i<<" = ";gets(nm[i]);
       if (i>1)
        { for (j=1;j<=(i-1);j++)
           { a=(strcmp(nm[i], nm[j]));
               if (a<=0)
                { strcpy (temp, nm[i]);
                  for (k=(i-1);k>=j;k--)
                   { m=(k+1);
                     strcpy (nm[m], nm[k]);
                   }
                  strcpy (nm[j], temp);
                }
           }
        }
      }
    cout<<"\nHasil pengurutannya adalah : \n";
    for (i=1;i<=6;i++)
     { cout<<"\n"<<nm[i];}
getch();}
