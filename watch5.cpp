#include <iostream>
#include <string>

using namespace std;
class watch{
	public:
	int hour;
	int minute;
	int second;
	void getTime();

	watch(int h, int m, int s);

};

watch::watch(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
std::cout<<hour<<":"<<minute<<":"<<second<<endl;
	
};

void watch::getTime()
{	 }



int main()
{
	watch watch1(1,20,30);
	return 0;
}
