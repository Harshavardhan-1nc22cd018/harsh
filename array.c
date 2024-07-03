// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,pos;
/*function prototype*/
void create();
void display();
int main()
{
    int choice=1;
    while (choice)
    {
        printf("\n\n-----menu-----\n");
        printf("%1.create\n");
        printf("2 display\n");
        printf("3 exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:exit(0);
                   break;
            defalut:printf("\n invalid choice:\n");
        }
    }
    return 0;
}
void create()
{
	printf("\n enter the size of the array elements:\t");
	scanf("%d",&n);
	printf("\n enter the elements for array:\n");
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i]);
	}
}
void display()
{
	int i;
	printf("\n the array elements are:\n");
	for(i=0;i<n;i++);
	{
		printf("%d\t",a[i]);
	}
}

