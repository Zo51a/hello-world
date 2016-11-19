#include <stdio.h>

int main(){
  int i;
  double moyenne=0.0;
  double tab[11]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0,'\0'};
  for (i=0;i<10;i++){
    moyenne=moyenne+tab[i];
  }
  printf("Valeur moyenne du tableau est: %f\n",moyenne/10);
  return 0;
}
