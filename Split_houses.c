#include <stdio.h> 
int main()
{     
int num,i=0;  
char house[50];    
int ans=1;    
scanf("%d", &num); 
scanf("%s", &house);     
if(num<21&&num>0){        
for(i=num;i>=0;i--){            
if(house[i]=='H'&&house[i-1]=='H'){                        
    ans=0;                    
    printf("NO");                      
    break;                                  
}
else 
{                 
if(house[i]=='.')
{                 
 house[i]='B';    
}
else 
{          
}            
}              
}          
if(ans!=0)
{              
printf("YES
");        
printf("%s",&house);         
}
else
{
}                               
}        
else
{          
printf("NO");         
}       
return 0;  
}
