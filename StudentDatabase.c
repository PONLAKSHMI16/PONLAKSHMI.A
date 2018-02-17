#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{

    int i=0,n=0;
    printf("Project work on student marklist database for class on Reg.No Basis\n\t\t\t\t\t\t\tSubmitted by:\n\t\t\t\t\t\t\tPon Lakshmi Akka\n\t\t\t\t\t\t\t(1116151050__)\n\t\t\t\t\t\t\tEEE Dept\n\t\t\t\t\t\t\t\tRMKCET\n");
    printf("Enter no of students");
    scanf("%d",&n);

    printf("Enter information of students in RMKCET(1116):\n");

    // storing information
    for(i=0; i<n; ++i)
    {
        s[i].roll = i+5000;

        printf("\nFor Register number :11161510%d,\n",s[i].roll);

        printf("Enter name as per RMK ID: ");
        scanf("%s",s[i].name);

        printf("Enter Overall CGPA: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<n; ++i)
    {
        printf("\nRegister number 11161510%d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("CGPA: %.1f",s[i].marks);
        printf("\n");
    }
	printf("Thankyou");
        scanf("%*c");
    return 0;
}
