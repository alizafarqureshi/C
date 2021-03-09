void comp (void);


int main(void)
{

	printf("\n  This program computes the given function using UDF");
	comp();
return 0;
}

void comp(void)
{

	int a=5,b=2,c,x;

	for(x=1;x<=5;x++)
    {
    	c=2*a*a+ 13*b*b*b;
    	printf("\n The value of C is %d",c);
    	a++;
    	b++;


	}

}
