#include <iostream>
using namespace std;

class Time1{
	private:
		int hour;
		int minute;
		int second;
		
		
	public:
		
		Time1(int h, int m, int s){
			set_hour(h);
			set_minute(m);
			set_second(s);
			
			print();
		}
		
		void print(){
			cout<<" Time: "<<hour<<":"<<minute<<":"<<second<<endl;
		}
		
		void set_hour(int h){
			hour = h;
		}
		void set_minute(int m){
			minute = m;
		}
		void set_second(int s){
			second = s;
		}
		
		
		int get_hour(){
			return hour;
		}
		int get_minute(){
			return minute;
		}
		int get_second(){
			return second;
		}
		
	
};

int main(){
	
	Time1 now(11, 25, 32);
	
	cout<<now.get_hour()<<endl;
	
	
	
	
	return 0;
}
