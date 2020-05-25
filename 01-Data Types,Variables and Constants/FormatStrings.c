#include <stdio.h>

int main() {

    //code 
    printf("\n\n");
    printf("**************************************************************************************************************\n");
    printf("\n\n");

    printf("Hello, World!\n\n");

    int a = 13;
    printf("Integer Decimal value of 'a' =  %d\n", a);
    printf("Integer Octal value of 'a' =  %o\n", a);
    printf("Integer Hexadecimal[lowercase] value of 'a' =  %x\n", a);
    printf("Integer Hexadecimal[uppercase] value of 'a' =  %X\n\n", a);

    char ch = 'A';
    printf("Character ch = %c\n", ch);
    
    char str[] =  "Astromedicomp's Real TIme Rendering Batch 3.0 (2020-2021)";
    printf("String str= %s\n\n", str);

    long num = 30121995L;
    printf("Long Integer 'num' = %ld\n\n", num);

    unsigned int b = 7;
    printf("Unsigned Integer 'b' = %u\n\n", b);

    float f_num = 3012.1295f;
    printf("Floating point number with just %%f 'f_num' = %f\n", f_num);
    printf("Floating point number with %%4.2f 'f_num' = %4.2f\n", f_num);
    printf("Floating point number with %%6.5f 'f_num' = %6.5f\n\n", f_num);

    double d_pi = 3.14159265358979323846;
    printf("Double precision floating point number without Exponential = %g\n", d_pi);
    printf("Double precision floating point number with Exponential(lower case) = %e\n", d_pi);
    printf("Double precision floating point number with Exponential(upper case) = %E\n", d_pi);
    printf("Double precision floating point number in Hexadecimal(lower case) = %a\n", d_pi);
    printf("Double precision floating point number in Hexadecimal(upper case) = %A\n\n", d_pi);

    printf("**************************************************************************************************************\n");  
    printf("\n\n");

    return(0);
}