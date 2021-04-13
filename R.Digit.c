    #include <stdio.h>
int reversDigits(int num)
{
	int rev_num = 0;
	while(num > 0)
	{
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	return rev_num;
}

int main()
{
	int num = 6789123;
	printf("Reverse of no. 6789123 is %d", reversDigits(num));

	getchar();
	return 0;
}
