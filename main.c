/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void passarray(char s[30]);
int main()
{
    //This problem fills an array with random numbers then prints them as chars
    srand(time(NULL));
    printf("Problem 1\n");
    char str[30];
    for(int f=0;f<30;f++)
    {
        str[f]=rand()%(122-97+1)+97;
        
    }
    for(int g=0;g<30;g++)
    {
        printf("%c ",str[g]);
    }
    printf("\n");
    
    
    
    
    //This problem changes lower case letters to upper case
    printf("Problem 2\n");
    char list[30];
    printf("Enter charcters\n");
    fgets(list,30,stdin);
    int index = 0;
    passarray(list);
    while (list[index] != '\0'){
    printf("%c", list[index]);
    index++;
    }
    //This problem adds spaces between each letter of your name
    printf("Problem 3\n");
    char name[50];
    printf("Enter your full name\n");
    fgets(name,50,stdin);
    int index2=0;
    
        while(name[index2]!='\0')
      {
        printf("%c ",name[index2]);
        index2++;
      }
    printf("\n");
    
    //This problem outputs name age and school
    printf("Problem 4\n");
    int age;
    char grade;
    char schoolname[35];
    
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your letter grade\n");
    scanf("%c", &grade);
    scanf("%c", &grade);
    
    printf("Enter your school name\n");
    getchar();
    fgets(schoolname, 35, stdin);
    printf("Your age is %d , and you got a(n) %c grade at ", age, grade);
    printf("%s", schoolname);
    
    //This problem detects which name comes first alphabetically
    printf("Problem 5\n");
    char firstname[40];
    char lastname[40];
    printf("Enter your first name\n");
    scanf("%s", firstname);
    printf("Enter your last name\n");
    scanf("%s", lastname);
    
    int outcome = strcmp(firstname,lastname);
    if(outcome==0)
    {
        printf("%s is the same as %s", firstname, lastname);
    }
    else if(outcome<0)
    {
        printf("%s comes before %s", firstname, lastname);
    }
    else if(outcome>0)
    {
        printf("%s comes before %s", lastname, firstname);
    }
    
    
    
    
}
void passarray(char s[30])
{
    for(int i=0; i<30;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    return;
}






