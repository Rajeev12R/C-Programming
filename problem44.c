#include <stdio.h>
int main()
{
	int Number, Next, i, First_Value = 0, Second_Value = 1;
	
	printf("\n Please Enter the Range Number: ");
	scanf("%d",&Number);
	
	/* Find & Displaying */
	for(i = 0; i <= Number; i++) 
	{
		if(i <= 1)
		{
			Next = i;
	    }
		else
		{
			Next = First_Value + Second_Value;
			First_Value = Second_Value;
			Second_Value = Next;
		}
		printf("%d ", Next);
	}
	return 0;
}
