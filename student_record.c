
#include <stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    char dept[20];
    char course[20];
    int year;
    
}s[450];

void years(int year)
{
    int i;
    for(i=0;i<450;i++)
    {
        if(year==s[i].year)
        printf("%s\n",s[i].name);
    }
    
}
void rolln(int roll)
{
    int i;
    if(roll==s[i].roll_no)
    {
        printf("\n Name is %s \n Department is %s \n Course is %s \n Year of joinng is %d",s[i].name,s[i].dept,s[i].course,s[i].year);
    }
}
    
    void deptm(char dept[])
{
    int i,c;
    for(i=0;i<450;i++)
    {
        c=strcmp(dept,s[i].dept);
        if(c==0)
        printf("%s\n",s[i].name);
    }
}


int main()
{
    int i,year,n,roll;
    char dept[20];
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter roll no");
    scanf("%d",&s[i].roll_no);
    printf("Enter name");
    scanf("%s",s[i].name);
    printf("Enter dept");
    scanf("%s",s[i].dept);
    printf("Enter course");
    scanf("%s",s[i].course);
    printf("Enter the year");
    scanf("%d",&s[i].year);
    }
    printf("Enter the year to find the names of all the students who joined in the particular");
    scanf("%d",&year);
    printf("The students which joined in the year %d are\n",year);
    years(year);
    printf("Enter the roll no");
    scanf("%d",&roll);
    rolln(roll);
    printf("Enter the department name");
    scanf("%s",dept);
    deptm(dept);
    
    return 0;}
