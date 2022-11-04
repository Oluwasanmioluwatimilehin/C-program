#include <stdio.h>  

#include <conio.h>  

#include <string.h>  

void main()  

{  

    char str[50], temp; // define the size of str[] array  

    int i, left, right, len;  

    printf ("This programme displays reverse of words or sentence. \n");  

    printf ("****************************************************\n");  

    printf (" \n Enter a string to reverse order: ");  

    scanf( "%s", &str);  

    len = strlen(str); 
    // get the length of the string  

    left = 0; 
    // set left index at 0  

    right = len - 1; 
    // set right index len - 1  

    // use for loop to store the reverse string  

    for (i = left; i <right; i++)  

    {  

        temp = str[i];  

        str[i] = str[right];  

        str[right] = temp;  

        right--;  

    }  

    printf (" The reverse of the original string is: %s ",  str);  

    getch();  

}  