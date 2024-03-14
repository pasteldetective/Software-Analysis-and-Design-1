#include <iostream>
using namespace std;

class Time
{
    public:
    int h, m; 
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

//function from 0:00AM to time
int minutesSinceMidnight(Time time)
{
    int hrsToMin = 0;
    hrsToMin += ((time.h * 60) + time.m);
    return hrsToMin;
}

int minutesUntil(Time earlier, Time later)
{
    int earlyConverter = (earlier.h * 60) + earlier.m;
    int laterConverter = (later.h * 60) + later.m;
    int minsDiff = laterConverter - earlyConverter;
    return minsDiff;
}

Time addMinutes(Time time0, int min)
{
    Time adjust = {time0.h,time0.m};
    if (min + adjust.m > 60)
    {
        adjust.h += (min+adjust.m)/60;
        adjust.m = (min+adjust.m)%60;
    }
    else if (min > 60) 
    {
        adjust.h += (min/60);
        adjust.m += (min%60);
    }
    else if (min + adjust.m == 60)
    {
        adjust.h += 1;
        adjust.m = 0;
    }
    else
    {
        adjust.m += min;
    }
    return adjust;
}

//task D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    TimeSlot nextAva;
    nextAva.movie = nextMovie;
    nextAva.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nextAva;

}

//task E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    if (minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime))
    {
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime) -
        minutesSinceMidnight(ts1.startTime));
    }
    else
    {
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime) -
        minutesSinceMidnight(ts2.startTime));
    }
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts)
{
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << " ,ends by " << endTime.h << ":" << endTime.m << "]" << endl;
}
/* Test
void printTime(Time time) 
{
    cout << time.h << ":" << time.m;
}
*/

int main()
{
    /*
    Time now;
    now.h = 17;
    now.m = 45;
    printTime(now);
    */
   
   /*Task A
   Time timeA, timeB;
   cout << "Enter first time: ";
   cin >> timeA.h >> timeA.m;
   cout << "Enter second time: ";
   cin >> timeB.h >> timeB.m;
   int minDiff = minutesUntil(timeA, timeB);
   int mornDiff1 = minutesSinceMidnight(timeA);
   int mornDiff2 = minutesSinceMidnight(timeB);
   cout << "These moments of time are " << mornDiff1 << " and " << mornDiff2 << " minutes after midnight." << endl;
   cout << "The interval between them is " << minDiff << " minutes." << endl;
   
   */

    /*Task B
    Time timeA;
    int min;
    cout << "Enter time: ";
    cin >> timeA.h >> timeA.m;
    cout << "Enter min: ";
    cin >> min;
    timeA = addMinutes(timeA,min);
    cout << "This is adjusted: " << timeA.h << " " << timeA.m << endl;
  */

    /* Task C
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    //mine
    Movie movie3 = {"Cock", ACTION, 69};
    Movie movie4 = {"Balls", ACTION, 420};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    //two more
    TimeSlot ass1 = {movie3, {00,01}};
    TimeSlot ass2 = {movie4, {04,20}};

    printTimeSlot(morning);
    printTimeSlot(daytime);
    printTimeSlot(evening);
    printTimeSlot(ass1);
    printTimeSlot(ass2);
    */

   

}