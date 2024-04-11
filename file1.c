/*
#include<stdio.h>
void main()
{
  float radius, area, cf;
    printf("Enter Radius of Circle\n");
    scanf("%f",&radius);

    //value of pi is 3.14
    area=3.14*radius*radius;
    printf("The area of Circle is %f",area);

    cf=2*3.14*radius;
    printf("\nThe Circumference of Circle is %f",cf);
}


#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}


int main()
{
    float eng, phy, chem, math, comp; 
    float total, percentage;
 
    printf("Enter marks of five subjects: :- ");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);
 
    total = eng + phy + chem + math + comp;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %.2f\n", total);
    
    printf("Percentage = %.2f", percentage);
 
    return 0;
}


#include <stdio.h>

//main program
int main()
{
    //variable to store values
    float basic, DA, HRA;
    float IT,PF;
    float net_salary;
	
    //input required fields
    printf("Enter Basic Salary ($): ");
    scanf("%f",&basic);

	
    //calculate DA 12% of Basic Salary
    PF= (basic*2)/100;
    HRA= (basic*5)/100;
    DA = (basic*8)/100;
    IT=(basic*3)/100;
    printf("%f\n %f\n %f\n %f",PF,HRA,DA,IT);
	
    //calculate net salary
    net_salary = basic + DA + HRA  - (PF+IT);
	
    //printing Net salary
    printf("Net Salary is: $ %.02f\n",net_salary);
	
    return 0;
}

*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  //consider two numbers as 4 and 5
    a = a + b;  //a = 4 + 5 = 9
    b = a - b;  //b = 9 - 5 = 4
    a = a - b;  //a = 9 - 4 = 5
    printf("Numbers after swapping: %d %d", a, b);
}

#include <stdio.h> 
int main()
{
    int var1, var2, temp; 
    printf("Enter two integers \n");
    scanf("%d%d", &var1, &var2);
    printf("Before Swappingn First variable = %d\nSecond variable = %d \n", var1, var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("After Swappingn First variable = %d\nSecond variable = %d\n", var1, var2);
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    float radius, height;
    float surface_area, volume,pi=3.14;
    printf("Enter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
    surface_area = 2 * pi * radius * (radius + height);
    volume = pi * radius * radius * height;
    printf("Surface area of cylinder is: %f", surface_area);
    printf("\n Volume of cylinder is : %f", volume);
}

#include<stdio.h>

void main()
{
   float fahrenheit,Celcious,Kelvin;
    printf("\nEnter temperature in fahrenheit:");
   scanf("%f",&fahrenheit);
   Celcious=(fahrenheit - 32) * 5/9; // Formula  C=5.0/9(F-32)
   Kelvin=Celcious+273.15;
   printf("\nTemperature in celsius: %f",Celcious);
    printf("\nTemperature in Kelvin: %f",Kelvin);
}

