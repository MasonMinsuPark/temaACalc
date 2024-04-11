class calc {
public:

	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
	
  int getGop(int a,int b) { return a*b; }
  
	int getZegop(int a, int b)
	{
		int ret = 1;
		for (; b > 0; b--)
		{
			ret *= a;
		}
		return ret;
	}
};

