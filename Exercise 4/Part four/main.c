/*
 * Programmer: Shayan Mansornia     Date:11/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main() {
    int numfile,fa,ft,fv,tospce,aftspc;
    int textfile=1 , videofile=1 ,audiofile=3 , memory=1;
    char c;
   tospce=memory*1024;

    printf("\nEnter your cellphone storage in GB:");
    scanf("%d",&memory);
    printf("\nEnter the number of files and files type:\n");
    printf("For audio file enter (a)");
    printf(" For text file enter (t)");
    printf(" For video file enter (v)\n");
    scanf("%d %c",&numfile,&c);


    if(c == 'a'){
        fa=numfile*audiofile;
        printf("Size of your audio file is -----> %d MB\n",fa);
        aftspc=tospce-fa;
        printf("Your phone's final storage is -----> %d MB\n",aftspc);
    }
    else if(c == 't'){
        ft=numfile*textfile;
        printf("Size of your text file is -----> %d MB\n",ft);
        aftspc=tospce-ft;
        printf("Your phone's final storage is -----> %d MB\n",aftspc);
    }
    else if(c == 'v'){
        fv=numfile*videofile;
        printf("Size of your video file is -----> %d MB\n",fv);
        aftspc=tospce-fv;
        printf("Your phone's final storage is -----> %d MB\n",aftspc);
    }
    return 0;
}