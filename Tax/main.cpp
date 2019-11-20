//
//  main.cpp
//  homework3
//
//  Created by Brandon Johns on 10/10/17.
//  CMPE 30
// Tuesday Thursday 4:30-5:20
//

#include <iostream>

#include <stdio.h>
#include <stdint.h>


void enableFlushAfterPrintf()
{
    setvbuf(stdout, 0, _IONBF, 0);
    setvbuf(stdin, 0, _IONBF, 0);
}


float personal_exemption=0;
float standard_deduction=0;
float taxable_income=0;
float tax_percentage=0;

float annual_income=0;
float max_tax=0;
float currenthr=0;
float low=0;
float tax_due=0;
float effective_tax=0;
char name[32];


          
          
int main()
{
    enableFlushAfterPrintf();
    printf("what is your name?\n");
    scanf("%s", &name[0]);
    printf("%s Tax Calculator\n", name);
    printf("------------------------------------------- \n");

    printf("enter your current hourly rate:   \n");
    scanf("%f", &currenthr);
    annual_income= 40*52*currenthr;
    
   
    printf("your annual income is %.02f\n", annual_income);
    
    personal_exemption=4050;
    standard_deduction=6350;
    
    taxable_income= annual_income - personal_exemption - standard_deduction;
    

  
    
    //39.6
    if( taxable_income>=418401)
    {
        
        printf("your taxable income is %.02f \n", taxable_income);
        printf("your tax bracket is 39.6\n");
        max_tax=594.65+74266.17;
        low= 418401;
        tax_percentage=.396;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        

    }
    //35
    else if (taxable_income<=418400  && taxable_income>= 416701)
    {
        
        printf("your taxable income is %.02f \n ", taxable_income);
        printf("your tax bracket is 35\n");
        max_tax=74266.17+27929.72;
        low= 416701;
        tax_percentage=.35;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        
        
    }
    //33
    else if (taxable_income<=416701 && taxable_income>= 191651)
    {
        printf("your taxable income is %.02f \n ", taxable_income);
        printf("your tax bracket is 33\n");
        max_tax= 27929.72+13487.25;
        low=191651;
        tax_percentage=.33;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        
    }
    
    //28
    
    else if (taxable_income<=191650 && taxable_income>= 91901)
    {
        printf("your taxable income is %.02f \n ", taxable_income);
        printf("your tax bracket is 28 \n");
        max_tax= 13487.25+4293.60;
        low=91901;
        tax_percentage=.28;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
    
    }
    
    //25
    else if (taxable_income<=91900 && taxable_income>= 37951)
    {
        printf("your taxable income is %.02f \n ", taxable_income);
        printf("your tax bracket is 25\n");
        max_tax=4293.60 + 932.50;
        low=37951;
        tax_percentage=.25;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        
    }
    
    //15
    else if (taxable_income<=37950 && taxable_income>= 9326)
    {
       printf("your taxable income is %.02f \n ", taxable_income);
       printf("your tax bracket is 15\n");
        max_tax= 932.50;
        low=9326;
        tax_percentage=.15;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        
        
    }
    
    // 10
    else if (taxable_income<=9325 && taxable_income>= 0)
    {
        printf("your taxable income is %.02f \n ", taxable_income);
        printf("your tax bracket is 10\n");
        max_tax=0 ;
        low=0;
        tax_percentage=.10;
        tax_due= max_tax + (taxable_income-low)*(tax_percentage);
        effective_tax= (tax_due/taxable_income)*100;
        
    }
    ;
    
    printf("your expected taxes owed is %.02f \n", tax_due);
    printf("your effective tax rate is %.02f \n", effective_tax);
    
    
    
   
    
    
    
    

    
    
}
