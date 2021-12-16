/*
 * Programmer: Shayan Mansornia     Date:12/15/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 21
typedef struct {
    int site_id_num;
    int day_of_month;
    int wind_speed;
    int temperature;
}measured_data_t;

void main(){
    measured_data_t data[MAX];
    char temp[10];
    measured_data_t a_measured_data;
    int i,n,var;
    int max[3],min[3],diff[3],avg[3],count[3];
    n = 0;
    printf("\nWeather and Climate Research Data\n");
    printf("===================================\n\n");


    FILE *infilep;
    infilep = fopen("c:\\data.txt", "r");
    if (infilep == NULL){
        printf("Cannot Open File - Check File Name\n");}

    for(i=0;i<8;i++){
        fscanf(infilep,"%s",&temp);
    }for(i=0;i<MAX;i++){
        fscanf(infilep, "%4d %3d %3d %3d"
               ,&a_measured_data.site_id_num
               ,&a_measured_data.day_of_month
               ,&a_measured_data.wind_speed
               ,&a_measured_data.temperature);
        data[n]=a_measured_data;
        n++;
    }
    fclose(infilep);

    printf(" ID    Day  Wind  Temp\n");
    for(i=0;i<MAX;i++){
        printf("%4d  %3d   %3d   %3d\n", data[i]);
    }
    printf("\n\n");

    n=0;
    diff[0]=data[0].site_id_num;
    for(i=0;i<MAX;i++){
        if(diff[n]==data[i].site_id_num){
            continue;
        }else {
            n++;
            diff[n]=data[i].site_id_num;
        }
    }

    n=0;
    for(i=0;i<MAX;i++)
    {
        if(diff[n]==data[i].site_id_num){
            if(max[n]<data[i].temperature)
            {
                max[n]=data[i].temperature;
                min[n]=data[i].temperature;
            }
            n++;
        }
    }

    for(i=0;i<MAX;i++){
        for(n=0;n<3;n++){
            if(diff[n]==data[i].site_id_num){
                if(min[n]>data[i].temperature)
                    min[n]=data[i].temperature;
            }
        }
    }

    for(i=0;i<MAX;i++){
        for(n=0;n<3;n++){
            if(diff[n]==data[i].site_id_num)
            {
                avg[n]=avg[n]+data[i].wind_speed;
                count[n]+=1;
                continue;
            }
        }
    }

    printf("ID    MaxTemp MinTemp Variation AvgWind\n");
    for(i=0;i<3;i++)
        printf("%d\t%d\t%d\t%d\t%d\n",diff[i],max[i],min[i],max[i]-min[i],avg[i]/count[i]);
    printf("\n\n");
    var=0;
    for(n=0;n<3;n++){
        if((max[n]-min[n])>var)
            var=max[n]-min[n];
    }

    printf("Temperature :\n");
    for(n=0;n<3;n++){
        if((max[n]-min[n])==var)
            printf("Greatest temperature is at Id: %d \n",diff[n]);
    }

    var=0;
    for(n=0;n<3;n++){
        if((avg[n]/count[n])>var)
            var=avg[n]/count[n];
    }
}
