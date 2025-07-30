#include <stdio.h>
void main()
{
	char isstudent='y';
	double price=5070;
	double totalprice;
	
	if(isstudent=='y')
	{
		if(price>500)
		totalprice=price-price*0.20;
		else
		totalprice=price-price*0.10;
	}
	else
	{
	if(price>600)
	totalprice=price-price*0.20;
	else
	totalprice=price-0;
}

printf("the final price of the customer is %lf",totalprice);
}