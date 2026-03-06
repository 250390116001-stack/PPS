# include <stdio.h>
int main ()
{
   float Maths, English, Physics, Biology, Chemistry;
   float total_per;
      printf ("\n Subject Marks:");
      
     printf ("\n enter a Maths marks:");
     scanf ("%f" , &Maths);
     while (Maths < 0 || Maths >100)
 {
    printf ( " \n please enter valid marks between 0-100 ");
    scanf ("%f" , &Maths);
  }
  
   printf ("\n enter a English marks:");
   scanf  ("%f" , &English);
   while (English < 0 || English >100)
{
    printf ("\n please enter valid marks between 0-100");
    scanf  ("%f" , &English);
}
 
  printf ("\n enter a Physics marks:");
  scanf ("%f" , &Physics);
  while (Physics <0 || Physics >100)
{
   printf ("\n please enter valid marks between 0-100");
   scanf ("%f" , &Physics);
}
  printf ("\n enter a Biology marks:");
   scanf  ("%f" , &Biology);
   while (Biology < 0 || Biology >100)
{
  printf ("\n please enter valid marks between 0-100");
  scanf  ("%f" , &Biology);
}
   printf ("\n enter a Chemistry marks:");
   scanf  ("%f" , &Chemistry);
   while (Chemistry < 0 || Chemistry >100)
{
  printf ("\n please enter valid marks between 0-100");
  scanf  ("%f" , &Chemistry);
}

int total = Maths + English + Physics + Biology + Chemistry ;
printf("Congratulation Your total Is  \n");
 
 float Percentage = (total * 100 ) / 500 ;
printf("Congratulation You Got Percentage = %f \n",Percentage);

  if (Percentage >= 90)
  {
  printf("Congratulation You Get A Grade");
  }
 else if (Percentage >= 70)
 {
  printf("Congratulation You Get B Grade");
  }
  else if (Percentage >= 60)
 {
  printf("Congratulation You Get C+ Grade");
  }
  else if (Percentage >=50)
 {
  printf("Congratulation You Get C Grade");
  }
  else if (Percentage >= 40)
 {
  printf("Congratulation You Get D Grade");
  }
  else if (Percentage < 40)
 {
  printf(" You Get fail");
  }
  return 0;


  
     
}
