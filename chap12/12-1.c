#include<stdio.h>

#define SALES 3
#define ENGINEERS 15

//structure to hold data for a mailing list
struct mailingList
{
    char name[30];
    char email[30];
    char company[15];
};


int main()
{
    struct mailingList sales[SALES], tech[ENGINEERS];

    sprintf(sales[0].name, "%s", "Anna");
    sprintf(sales[0].email,"%s", "anna@msft.com");
    sprintf(sales[0].company, "%s", "Microsoft");

    sprintf(tech[0].name, "%s", "Kate");
    sprintf(tech[0].email,"%s", "kate@msft.com");
    sprintf(tech[0].company, "%s", "Microsoft");

    printf("Name: %s, email: %s, company: %s \n", sales[0].name, sales[0].email, sales[0].company);

    return 0;
}
