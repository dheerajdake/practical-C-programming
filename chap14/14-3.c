#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{

    FILE * fp, * fp1, * fp2;

    fp = fopen("numbers.txt","r");

    if(fp == NULL){

      printf("Error opening file");
      exit(0);
    }

    //copy file
    fp1 = fopen("allNums.txt", "w");

    //divisible by 3
    fp2 = fopen("divi3.txt", "w+");

    char * a = malloc(sizeof(char)*10);
    *a = fgetc(fp);

    while(*a != EOF){
	     if(*a == 0x13) //CR
	     {

	     }
	     else
	     {
	          fwrite(a, 1, 1, fp1);
	     }
       *a = fgetc(fp);
    }
    fclose(fp);
    fclose(fp1);
    free(a);

    fp = fopen("numbers.txt","r");

    char  *b = malloc(sizeof(char)*10);
    *b = fgetc(fp);

    int digits[10], sum = 0;
    memset(digits, 0, sizeof(digits));
    int indx = 0;

    //write buffer
    char fDigits[10];

    while(*b != EOF){

      if(*b != '\n'){
        digits[indx] = *b - '0';
        indx++;
      } else {
        //have digits
        for(int a=0; a<indx; a++){
          sum += digits[a];
        }

        //divisible by 3?
        if(sum%3 == 0) {
            memset(fDigits, 0, sizeof(fDigits));
            int a = 0;
            for( ; a<indx; a++){
              //sprintf(&fDigits[a], "%c", digits[a] + 48);
              fDigits[a] = (char)(digits[a] + 48);
                          //how to write numbers as chars into a buffer to a file ???
              printf("%c", fDigits[a]);

              //fwrite((int *)digits, sizeof(int), , fp2);   
            }
            fwrite(fDigits, sizeof(char), a, fp2);
            fwrite((char*)"\n", sizeof(char), 1, fp2);
            printf("\n");
        }
        //printf("Sum: %d\n", sum);
        sum = 0;
        indx = 0;
        for(int a=0; a<10; a++){
          digits[a] = 0;
        }
      }
      *b = fgetc(fp);

    }

//#endif
    return 0;
}
