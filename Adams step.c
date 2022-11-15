// PSEUDOCODE FOR THE PROGRAMME

//T = input('Plesse input test number:' )

//Print("Test case", T)

//Steps = 'UUUDU'

//Up = 0
//Down = 0

//For i = 0,
  //i <= len(step1)
  //If Step1[i] == 'U' then
       //Up = up+1
       //i = i+1
       //Continue
   //Else If Step[i] == 'D' then
     //  Down = down + 1
       // i = i+1

//print("Adam took", Up, "Steps before falling.")

// ACTUAL CODE


#include<stdio.h>

int main()

{
    int up, down;
    int i, T = 1;

    char steps[100];
    up = 0;
    down = 0;

    FILE *file = fopen("adam.txt", "r");

    while(fscanf(file, "%s", steps) != EOF){

            for (i = 0; i <= strlen(steps); i++) {

                if (steps[i] == 'U') {
                    up = up + 1;
                    continue;
                }else if (steps[i] == 'D') {
                    down = down + 1;
                    break;
                }

            }
        printf("Test Case %i: Adam took %i steps and had %i fall.\n", T, up, down);
        
        T++;//incrementing the test cases to display base on the on the number of lines in the file
    }

}
