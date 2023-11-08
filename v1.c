#include <stdio.h>                              
#include <stdlib.h>

int pom(int arg){                               
    int temp = arg % 10, max = -1;              
    while(arg != 0){                            
        int tr = arg % 10;                      
        if(abs(temp - tr) > max){               
            max = abs(temp - tr);

        }                                       
        temp = arg % 10;                        
        arg/= 10;                               
    }                                           
    return max;                                 
}

int main()                                      
{                                               
    char c;                                     
    int broj = 0;

    while((c = getchar()) != EOF) {             
        if(c >= '0' && c <= '9'){               
            broj = broj * 10 + (c - '0');       
        }                                       
        else{                                   
            int raz = pom(broj);                
            if(raz < 3){                        
                printf("%d\n", broj);           
            }                                   
            broj = 0;                           
            if(c == '\n'){                      
                break;                          
            }                                   
        }                                       
    }

    return 0;                                   
}                                               
