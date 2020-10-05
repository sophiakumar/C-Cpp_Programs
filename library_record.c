

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct library
{
  int acc_no;
  char title[30];
  char author_name[30];
  int price;
  int flag;
}s[1000];

void main ()
{
  int i=0,k,m,c=0,n=1,a,acces,temp,j,d;
  char bookauthor[30],booktitle[30];
  while (n > 0)
    {
    printf("\nEnter the option \n 1.Add book info\n 2.Display book info\n 3.list all the books of given author\n4.List the title of specified book\n 5.List the count of all the books in the library\n6.List the books in the order of accession number\n 7.Exit\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Enter the number of book details you will enter");
        scanf("%d",&m);
        for(i=c,j=0;j<m;i++,j++)
        {
        printf("Add book title\n");
        scanf("%s",s[i].title);
        printf("Enter the price");
        scanf("%d",&s[i].price);
        printf("Enter the accession number");
        scanf("%d",&s[i].acc_no);
        printf("Enter the author");
        scanf("%s",s[i].author_name);
        c++;
        }
        break;
        case 2:
        printf("Enter the book title\n");
        scanf("%s",booktitle);
        d=0;
        for(i=0;i<c;i++)
        {
            k=strcmp(s[i].title,booktitle);
            if(k==0)
           {
              printf("The book price is %d\nBook accesion number is %d\nAuthor name %s",s[i].price,s[i].acc_no,s[i].author_name);
              d++;
           }
            
        }
        if(d==0)
        {
            printf("Book not available");
        }
        break;
        case 3:
        printf("Enter author name");
        scanf("%s",bookauthor);
        d=0;
        for(i=0;i<c;i++)
        {
            k=strcmp(s[i].author_name,bookauthor);
            if(k==0)
            {
            printf("The books by %s is %s",s[i].author_name,s[i].title);
            d++;
            }
          
        }
        if(d==0)
          printf("Book not available");
        break;
        case 4:
        printf("Enter the accession number");
        scanf("%d",&acces);
        for(i=0;i<c;i++)
        {
         if(s[i].acc_no==acces)
        printf("The book title is %s",s[i].title);
        }break;
        case 5:
        printf("The book count is %d",c);
        break;
        case 6:
        for(i=0;i<c-1;i++)
        {
            for(j=0;j<c-i-1;j++)
            {
                if(s[i].acc_no>s[i+1].acc_no)
                {
                    temp=s[i].acc_no;
                    s[i].acc_no=s[i+1].acc_no;
                    s[i+1].acc_no=temp;
                }
                
            }
        }
        for(i=0;i<c;i++)
        {
            printf("%d\t%s\n",s[i].acc_no,s[i].title);
        }
        break;
        case 7:
        exit(0);
    }
n++;
    }
}

