
#include <vector>

using namespace std;

class PrimeFactors
{
public:
	vector<int> of(int n)
	{
		vector<int> res = {};
		if (n > 1)
		{
			for (int i = 2; i <= n; ++i)
			{
				if (n % i == 0)
				{
					n /= i;
					res.push_back(i);
					i = 1;
				}
			}
		}
		return res;
	}
};