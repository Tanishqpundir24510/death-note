#include <stdio.h>
#include<string.h>

typedef struct
{
    int id;
    char name[50];
    float b;
}STD;
STD s;
void display(FILE *);
int search(FILE *,int);
void main()
{char ch[9][50]={"Drug and research"," Laboratory set ups","Clinical budget","Non-Clinical budget","Pharmacy"," Nursing","Medical doctors","Different department of medical sciences"," Different department of surgery"};
    int i,n,id_key,opn;
    FILE *fp;
    fp=fopen("stud.txt","w");
    for(i=0;i<9;i++)
    {strcpy(s.name,ch[i]);
        printf("Read the Budget for %s\n",s.name);
        scanf("%f",&s.b);s.id=i+1;
        fwrite(&s,sizeof(s),1,fp);
    }
    fclose(fp);
    fp=fopen("stud.txt","r");
    do
    {
        printf("\nPress :: \n 1- Display\n 2- Search\n 3- Exit\n Your Option ? ");
        scanf("%d",&opn);
        switch(opn)
        {
        case 1: printf("\n Student Records in the File \n");
            display(fp);
            break;
        case 2: printf(" Read the ID of the student to be searched ?");
            scanf("%d",&id_key);
            if(search(fp,id_key))
            {
                printf("Success ! Record found in the file\n");
                printf("%d\t%s\t%fn",s.id,s.name,s.b);
            }
            else
                printf(" Failure!! Record with id %d not found\n",id_key);
            break;
        case 3:  printf(" Exit!! Press a key . . .");
            getch();
            break;
        default:  printf(" Invalid Option!!! Try again !!!\n");
            break;
        }
    }while(opn != 3);
    fclose(fp);
}
   /* End of main() */
 
 
void display(FILE *fp)
{
    rewind(fp);
    printf("ID\tName\t\tBudget\n");
    while(fread(&s,sizeof(s),1,fp))
 
        printf("%d\t%s\t%f\n",s.id,s.name,s.b);
}
int search(FILE *fp, int id_key)
{
    rewind(fp);
    while(fread(&s,sizeof(s),1,fp))
        if( s.id == id_key) return 1;
    return 0;
}