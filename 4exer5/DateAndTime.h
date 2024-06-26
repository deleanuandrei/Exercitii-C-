#ifndef DateAndTime_h
#define DateAndTime_H

class DateAndTime {

	public: 
			DateAndTime(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
			void setDateAndTime(int &, int &, int &, int &, int &, int &);
			void Tick();
			void Afisare();
			void AfisareInitiala();
			
	private:int year;
			int month;
			int day;
			int hour;
			int minute;
			int second;
};
#endif
