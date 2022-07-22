#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main ()
{
  
  printf("TWO RANDOM NUMBER CALCULATION GENERATOR\n");
  printf("----------------------------------------\n\n");
    
  int randomnumber1;
  int randomnumber2;
  float firstnum;
  float secondnum;
  
  srand (time(0));
  randomnumber1 = rand()%10;
  randomnumber2 = rand()%10;
  
  
  if(randomnumber1 > randomnumber2){
      printf("Your first random number = %d\n", randomnumber1);
      firstnum=randomnumber1;
      printf("Your second random number = %d\n", randomnumber2);
      secondnum=randomnumber2;
  } else if(randomnumber1 < randomnumber2){
      printf("Your first random number = %d\n", randomnumber2);
      firstnum=randomnumber2;
      printf("Your second random number = %d\n", randomnumber1);
      secondnum=randomnumber1;
  }
  
  float max;
  float min;
  float sum;
  float sub;
  float avg;
  float mlt;
  float dvd;
  float sqrrt1;
  float sqrrt2;
  
  
  
  max = firstnum;
  if (secondnum>max);{
      min = secondnum;
      if (firstnum<max);
  }
  
  
  sum = firstnum + secondnum;

  sub = firstnum - secondnum;

  avg = ((firstnum + secondnum) / 2);

  mlt = firstnum * secondnum;

  dvd = firstnum / secondnum;

  sqrrt1 = sqrt (firstnum);

  sqrrt2 = sqrt (secondnum);

  printf ("\n\n1. Your maximum number is %.2f\n\n", max);
  printf ("2. Your minimum number is %.2f\n\n", min);
  printf ("3. Sum is %.2f\n\n", sum);
  printf ("4. Substraction is %.2f\n\n", sub);
  printf ("5. Average is %.2f\n\n", avg);
  printf ("6. Multiplication is %.2f\n\n", mlt);
  printf ("7. Division is %.2f\n\n", dvd);
  printf ("8. Square root of your first number is %.2f\n\n", sqrrt1);
  printf ("9. Square root of your second number is %.2f\n\n", sqrrt2);

  return 0;
}