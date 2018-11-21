#include <iostream>
#include <string>

using namespace std;
class watch{
	public:
	int hour;
	int minute;
	int second;
	void getTime();
	watch();
};

watch::watch()
{
	hour = 1;
	minute = 20;
	second = 30;
};

void watch::getTime()
{	std::cout<<hour<<":"<<minute<<":"<<second<<endl; }



int main()
{
	watch watch1;
	watch1.getTime();
	return 0;
}
