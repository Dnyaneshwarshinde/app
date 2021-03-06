#include<stdio.h>
// decl of structure
#pragma pack(1) //-- make struct member alligement as 1 byte
struct emp
{
	// variable or data members
	int empno;
	char name[10];
	float sal;
};//end of emp structure
void AcceptEmpInfo(struct emp *e); // e = 4 or 8 bytes
//void DisplayEmpInfo(struct emp e); // e - 18 bytes
void DisplayEmpInfo(const struct emp *e); // e - 4 or 8 bytes
void SetSalary(struct emp *e, float sal);
float GetSalary(const struct emp *e);
int main()
{
	// struct emp is a user defined data type
	//struct emp e1={1};
	struct emp e1;
	float newsal;

	printf("\n Enter Employee Info :: \n");
	AcceptEmpInfo(&e1);

	printf("\n Employee info ::in main correct output \n");
	DisplayEmpInfo(&e1);

	printf("\n Enter New Salary  :: ");
	scanf("%f", &newsal);
	SetSalary(&e1, newsal);

	printf("\n updated salary :: ");
	DisplayEmpInfo(&e1);

	newsal= GetSalary(&e1);
	printf("\n newsal =%.2f", newsal);
	printf("\n\n\n\n");
	return 0;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter EmpNo :: ");
	scanf("%d", &e->empno);

	printf("\n Enter Name :: ");
	scanf("%s", e->name);

	printf("\n Enter salary ::");
	scanf("%f", &e->sal);

	return;
}
void DisplayEmpInfo(const struct emp *e)
{
//	e->sal=-10000;
	printf("\n EmpNo  name   Salary \n");
	printf("%-8d%-10s%-8.2f", e->empno, e->name, e->sal);
	return;
}
void SetSalary(struct emp *e, float sal)
{
	e->sal=sal;
	return;
}
float GetSalary(const struct emp *e)
{
	return e->sal;
}
