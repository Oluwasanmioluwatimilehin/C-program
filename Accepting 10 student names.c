#include <stdio.h>

int main()
{
    int i, n=10;
    
    for(i=1; i<=n; i++)
    {
        char firstname[20];
        printf("What is your first name?\n");
        scanf("%s", firstname);
        int j;
        for(j=1; j<=n; j++)
        {
          char names[] = {firstname};
            continue;
        }
       
        
    }
    
     int k;
 
     for(k=0; k<n; k++)
     {
        printf("%s\n", names[k]);
        
     }
    
    return 0;
}