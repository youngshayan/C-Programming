/*
 * Programmer: Shayan Mansornia     Date:11/24/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main()
{
    int a[1000],i,n,even=0,odd=0;

    printf("\nHow many number do you want to enter? ");
    scanf("%d",&n);

    printf("Enter the numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;

    }
    printf("Number of evens: %d",even);
    printf("\noNumber of odds: %d",odd);


    return 0;
}