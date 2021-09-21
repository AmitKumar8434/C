#include <iostream>
#include<conio.h>
using namespace std;
class time 
{
	private:
		int hour;
		int minute;
	public:
		void settime();
		void showtime()
		{
			cout<<hour<<" hours "<<minute<<" minutes ";
		}
		time add( time t1,time t2)
		{
			hour=t1.hour+t2.hour;
			minute=t1.minute+t2.minute;
			if(minute>=60){
				hour++;
				minute=minute-60;
			}
			
		}
	
};
void time::settime()
		{
			cout<<"Enter hours";
			cin>>hour;
			cout<<"Enter minutes";
			cin>>minute;
		}
int main(void)
{
	time t1,t2,t3;
	t1.settime();
	t2.settime();
	t3.add(t1,t2);
	t3.showtime();
	return 0;
	
}
