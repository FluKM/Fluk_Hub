// This is my project i did on c language regarding calculating attendence of students.

#include<stdio.h> // Header file
struct attend // Declaration of structure
	{
	char name[30];
	int present;
	float per;
	}s[100];
    
int main()
{
	int z;// z== no. of working days
	int p;// p== no.of students
	printf("Enter the number of working days:\n");
	scanf("%d",&z);
	printf("Enter the number of Students:\n");
	scanf("%d",&p);
	for(int i=0;i<p;i++)
		{
		printf("Enter Name of student [%d]:\n",i+1);
		scanf("%s",s[i].name);
		printf("Enter Number of days student [%d] was present:\n",i+1);
		scanf("%d",&s[i].present);
		}
        // The below code lines help us to create a table as the output to record the attendence
	printf("\n\n--------------------------------------------------------------------------\n");
	for(int i=0;i<p;i++)
		{
		s[i].per=s[i].present*100/z;
		}
	printf("              *****ATTENDENCE SHEET*****\n");
	printf("--------------------------------------------------------------------------\n");
	printf("sr.no   NAME     PRESENT    TOTAL DAYS     PRESENTAGE   \n");
	printf("--------------------------------------------------------------------------\n\n");
	for(int i=0;i<p;i++)
		{
	    printf("--------------------------------------------------------------------------\n");
	    printf("%d   %s   %d   %d   %.2f\n",i+1,s[i].name,s[i].present,z,s[i].per);
		}
	printf("--------------------------------------------------------------------------\n");
return(0);
}