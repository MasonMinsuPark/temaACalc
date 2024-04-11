class calc {
public:
	
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
