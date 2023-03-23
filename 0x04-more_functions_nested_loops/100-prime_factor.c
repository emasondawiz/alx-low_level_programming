#include <stdio.h>

/**
 *  main - entry point
 * 
 * Return: Always 0 (success)
 * 
 * 
 */


int main(void){

     unsigned long long int a, nlargevalue, primerun;
     
     nlargevalue= 1231952;
    for (a = 2; a < nlargevalue; a++){
        /*check for all the numbers that can divide it */
        if(nlargevalue % a == 0){
            /*printf("%llu ",a);*/
            /*check if this numbers are prime number*/
            int pcount = 0;

            for(primerun = 2; primerun <= (a/2); primerun++){
                if(a % primerun == 0 ){
                    pcount = pcount + 1;
                }
            }

                if(pcount == 0){
                /*this is a prime number*/
                /*printf("%llu ",a);*/
                /*i need to check the no of occurence*/
    unsigned long long int n, val, calc;
    n = nlargevalue;

val=a;
int result=0;

int counter=0;
    do{
             calc =n / val;
        n= calc;
            counter=counter + 1;



    }while (result == n % val);
/*  end of checking the occurence*/
int vc;
for(vc =1; vc <= counter; vc++){
    printf("%llu ",a);

}
            }


            
        }
    }

    return (0);
}
