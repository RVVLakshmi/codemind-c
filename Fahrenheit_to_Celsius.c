#include<stdio.h>
int main()   
{ 
float Fahrenheit, Celsius;  
scanf("%f",&Fahrenheit);
Celsius = ((Fahrenheit-32)*5)/9;  
printf("%.2f",Celsius);  
return 0;  
}  