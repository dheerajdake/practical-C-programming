#include<stdio.h>

int series[10] = {4,5,9,6,-9,-12,-459,0,78,-15};

int positives = 0, negatives = 0;

void countSigns(int * arr)
{
    printf("The numbers are: ");

    for(int a=0; a<10; a++)
    {
        printf("%d, ", arr[a]);

        if( arr[a] >= 0){
            positives++;
        }else{
            negatives++;
        }
    }
    printf("\n");
    printf("Positives: %d negatives: %d\n", positives, negatives);
}

int main()
{
    countSigns(series);
    return 0;
}
