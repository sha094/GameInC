#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void rand_num_generater(void);
void shape();
void info();
void input_speed();
void input1();
int a[25];
FILE *fp;
 float f;
int main()
{

    while(1)
    {

    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\t    __________________________");
    printf("\n\t\t\t\t\t\t\t\t    | LEARN SINGLE-MINDEDNESS|");
    printf("\n\t\t\t\t\t\t\t\t    |------------------------|");
    float hg;
    fp=fopen("highscore.dat","r+");
    system("color 0a");
    printf("\n\n\n  HIGH SCORE::");
    fscanf(fp,"%f",&hg);
    printf("%.2f SECOND",hg);
    fclose(fp);
    rand_num_generater();
    info();
    input_speed();
    if(hg==0||f<hg)
    fp=fopen("highscore.dat","w+");
    fprintf(fp,"%f",f);
    fclose(fp);
    getch();
    }
}
void input1(void)
{
    int n;
    for(int i=0;i<25;i++){
        scanf("%d",&n);
    }
}
void input_speed(void)
{
    int i;
    int ch;
    time_t start,end;
    printf("\n\n\n\n  HIT ENTER KEY-- FOR NEXT AND FOR EXIT ENTER BACKSPACE KEY::");
    ch=getch();
    if(ch==13)
     {
    printf("\n\n ENTER NUMBERS:");
    start=time(NULL);
    input1();
    end=time(NULL);
     }
    if(ch==8)
        exit(0);
    printf("\n\n TIME TAKEN BY INPUT VALUES=%.2f Second",f=difftime(end,start));
    printf("\n\n YOUR INPUT SPEED=%.2f Number/Sec",f/25.0);
    fp=fopen("highscore.txt","r");
    getch();
}
void info()
{
    printf("\n\n");
    printf("\n\t\t\t\t\t\t__________________________________________________________________________");
    printf("\n\t\t\t\t\t\t|NOTE:: Enter The Places Of All Number(According To Sorted Number Places)|");
    printf("\n\t\t\t\t\t\t|------------------------------------------------------------------------|");
    shape();
}
 void shape(void)
{
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t ____ ____ ____ ____ ____\n");
    printf("\t\t\t\t\t\t\t\t\t| %d | %d | %d | %d | %d |",a[0],a[1],a[2],a[3],a[4]);
    printf("\n\t\t\t\t\t\t\t\t\t|____|____|____|____|____|\n");
    printf("\t\t\t\t\t\t\t\t\t| %d | %d | %d | %d | %d |",a[5],a[6],a[7],a[8],a[9]);
    printf("\n\t\t\t\t\t\t\t\t\t|____|____|____|____|____|\n");
    printf("\t\t\t\t\t\t\t\t\t| %d | %d | %d | %d | %d |",a[10],a[11],a[12],a[13],a[14]);
    printf("\n\t\t\t\t\t\t\t\t\t|____|____|____|____|____|\n");
    printf("\t\t\t\t\t\t\t\t\t| %d | %d | %d | %d | %d |",a[15],a[16],a[17],a[18],a[19]);
    printf("\n\t\t\t\t\t\t\t\t\t|____|____|____|____|____|\n");
    printf("\t\t\t\t\t\t\t\t\t| %d | %d | %d | %d | %d |",a[20],a[21],a[22],a[23],a[24]);
    printf("\n\t\t\t\t\t\t\t\t\t|____|____|____|____|____|");

}
void rand_num_generater()
{
   int i,j,temp,min,max;
   srand(time(0));
   for(i=0;i<=25;i++)
    {
       temp=rand()%10+i;
       temp=temp+10;
         for(j=0;j<i;j++)
            {
           if(temp==a[j])
           break;
            }
   if(i==j)
   {
   a[i]=temp;
   }
   else
   i--;
    }
}

