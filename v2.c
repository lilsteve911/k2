#include <stdio.h>

int main() {                                              
    int c;                                                
    int trenutniBroj = 0;                                 
    int ukupno = 0;                                       
    int znak = 1;

    while ((c = getchar()) != EOF && c!= '\n') {          
        if (c >= '0' && c <= '9') {                       
            trenutniBroj = trenutniBroj * 10 + (c- '0');  
        } else if (c== '+') {                             
            ukupno += znak * trenutniBroj;                
            trenutniBroj = 0;                             
            znak = 1;                                     
        } else if (c== '-') {                             
            ukupno += znak * trenutniBroj;                
            trenutniBroj = 0;                             
            znak = -1;                                    
        }                                                 
    }

                                                          
    ukupno += znak * trenutniBroj;

    printf("%d\n", ukupno);

    return 0;                                             
}                                                         
