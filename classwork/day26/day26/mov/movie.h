#pragma once
/*Create a class Movie with members: title, genre, rating (out of 10). Write functions to accept 
movie details and another function to print "Hit", "Average", or "Flop" based on the rating.
*/

class movie
{
private:
	char title[20];
	char gener[20];
	int rate;
public:
	void settitle( char*);
      char* gettitle();
	void setgener(char*);
	  char* getgener();
	void setrate(int);
	  int getrate();
	 // int input(const char*, const char*, int);
	  void disp();
};