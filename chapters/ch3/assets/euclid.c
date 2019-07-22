//valid for positive integers.
int euclid(int a, int b) 
{
	int r = a % b;
	while(r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}