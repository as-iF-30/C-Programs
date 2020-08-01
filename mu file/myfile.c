#include<stdio.h>
#include<string.h>
struct
{
   int bid;
   char author[100],name[100];
}lib;
struct
{
   long long int phone_number;
    char name[80],branch[10],id[80];
}mem;
void add();
void search();
void display();
void author();
void member();
void edit();
void mdis();
int main()
{
    int n;
    printf("***welcome to CRAN library***\n");
    printf(" bank menu\n");
    printf("Press 1 to add book.\n");
    printf("Press 2 to search a book.\n");
    printf("Press 3 to display all books.\n");
    printf("Press 4 to all books of an author\n");
    printf("Press 5 to clear screen\n");
    printf("press 6 to add member\n");
    printf("press 7 to edit member record\n");
    printf("press 8 for member display\n");
    printf("Press 0 to exit\n");
    printf("\nEnter choice(0-7) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        add();
        break;
    case 2:
        search();
        break;
    case 3:
        display();
        break;
    case 4:
        author();
        break;
    case 5:
        system("cls");
        break;
    case 6:
        member();
        break;
    case 7:
        edit();
        break;
    case 8:
        mdis();
        break;
    case 0:
        return 0;
        break;
    default:
        printf("enter number between 0-5\n");
    }
    main();
    return 0;

}
add()
{
    struct lib;
   FILE *f1;
   f1=fopen("lib.txt","a+");
   if(f1==NULL)
   {
       printf("no such file");
   }
   else
   {
       printf("Enter The unique id of The Book :(Integer) \n");
        scanf("%d",&lib.bid);
        fflush(stdin);
       printf("Enter The Name of The Book :\n");
        gets(lib.name);
        printf("Enter The Name of Author :\n");
        gets(lib.author);
        fprintf(f1,"\n%d\t%s\t%s\t",lib.bid,lib.name,lib.author);
        fclose(f1);
        }
    printf("a new book has been added successfully");
}
search()
{
    struct lib;
    FILE *f2;
    int t,found=0;
    char name[70];
    f2=fopen("lib.txt","a+");
    if(f2==NULL)
    {
        printf("no such file exist");
    }
    else
    {
        printf("enter book name");
        scanf("%s",name);
        while(!feof(f2)&&found==0)
        {
            fscanf(f2,"%d %s %s",&lib.bid,lib.name,lib.author);
        if (strcmp(name,lib.name)==0)
            found=1;

        }
        if(found)
        {
       printf("\nThe Unique ID of The Book:  %d\nThe Name of Book is:  %s\nThe Author is:  %s\n\n",lib.bid,lib.name,lib.author);
        }
        else if(!found)
        {
            printf("there is no such books");
        }
          fclose(f2);
    }
}
display()
{
    FILE *f3;
    char ch;
    f3=fopen("lib.txt","r");
    if(f3==NULL)
    {
        printf("no such file exist");
    }
    else
    {
     ch=fgetc(f3);
    while(!feof(f3))
    {

     printf("%c",ch);
     ch=fgetc(f3);
    }
    fclose(f3);
}
}
author()
{
    struct lib;
    FILE *f2;
    int t,found=0;
    char name[70];
    f2=fopen("lib.txt","a+");
    if(f2==NULL)
    {
        printf("no such file exist");
    }
    else
    {
        printf("enter author name");
        scanf("%s",name);
        printf("books are:");
        while(!feof(f2))
        {
            fscanf(f2,"%d %s %s",&lib.bid,lib.name,lib.author);
        if (strcmp(name,lib.author)==0)
           {
               found=1;
           printf("\n%s\n",lib.name);
           }
        }
        if(!found)
        {
            printf("there is no such entry");
        }
          fclose(f2);
    }

}
member()
{
    struct mem;
    FILE *fp;
    fp=fopen("mem","a+");
    if(fp==NULL)
    {
        printf("no such file exist");
    }
    else
    {
        fflush(stdin);
    printf("enter ur UID:\n");
    gets(mem.id);
    printf("enter ur name\n");
    gets(mem.name);
    printf("enter ur branch\n");
    gets(mem.branch);
    printf("enter ur phone number\n");
    scanf("%lld",&mem.phone_number);
    fflush(stdin);
    fprintf(fp,"\n%s\n%s\n%s\n%lld",mem.id,mem.name,mem.branch,mem.phone_number);
    fclose(fp);
    }
    printf("***member added successfully***");
}
edit()
{
    struct mem;
    FILE *fp;
    FILE *fpt;
    int found=0;
    long long int phone_number;
    char uid[80],name[80],branch[80];
    fp=fopen("mem","r");
    fpt=fopen("temp","w");
    if(fp==NULL)
    {

        printf("no such file exist");
    }
    else
    {
        printf("\nenter the uid which is to be edit\n");
        fflush(stdin);
        gets(uid);
        rewind(fp);
        while(!feof(fp)&&found==0)
        {
            fscanf(fp,"%s %s %s %lld",&mem.id,&mem.name,&mem.branch,&mem.phone_number);
            if(strcmp(uid,mem.id)==0)
                found=1;

        }
        if (!found)
        {
            printf("not availabel\n");
        }
        else if(found)
        {
            fseek(fp,0,0);
            printf("\n uid number:%s\nname of student:%s\nbranch:%s\nphone number:%lld\n",mem.id,mem.name,mem.branch,mem.phone_number);
            printf("\nput new information\n");
            printf("\n ENTER NEW NAME:");
            scanf("%[^\n]s",&name);
            fflush(stdin);
            printf("enter new branch:");
            scanf("%[^\n]s",&branch);
            fflush(stdin);
            printf("enter new phone number:");
            scanf("%[^\n]lld",&phone_number);
            mem.phone_number=phone_number;
            fflush(stdin);
            fwrite(&mem,sizeof(mem),1,fpt);
        }
        fclose(fp);
        fclose(fpt);
        fp = fopen("mem", "w");
  fpt = fopen("temp", "r");
  while (fread(&mem,sizeof(mem), 1, fpt))
  {
   fwrite(&mem, sizeof(mem), 1, fp);
  }
  fclose(fp);
  fclose(fpt);
  printf("RECORD UPDATED\n");
 }

}
mdis()
{
    FILE *f3;
    char ch;
    f3=fopen("mem","r");
    if(f3==NULL)
    {
        printf("no such file exist");
    }
    else
    {
     ch=fgetc(f3);
    while(!feof(f3))
    {

     printf("%c",ch);
     ch=fgetc(f3);
    }
    fclose(f3);
}
}
