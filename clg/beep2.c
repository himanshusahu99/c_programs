#include<stdio.h>
int main()
{

int m, m_maths,m_phy,m_chem,t3,t2;
printf("enter the marks ih maths ");
scanf("%d",&m_maths);
printf("enter the marks ih physics");
scanf("%d",&m_phy);
printf("enter the marks ih chemistry ");
scanf("%d",&m_chem);

t3= m_maths + m_phy + m_chem;
t2=m_maths + m_phy;

if ( m_maths>=60 && m_phy>=50 && m_chem>=40)
   {  t3= m_maths + m_phy + m_chem;

   if (t3 >=200)
   { printf("you are eligible"); }
  
  else if (t2>=150)
   { printf("you are eligible" ) }
 
   else 
   { printf("you are not eligible"); }
 
 }

else 
 { printf("you are not eligible"); }
 
     printf("\n");


return 0; 



}
