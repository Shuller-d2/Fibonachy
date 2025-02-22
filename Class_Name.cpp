#include<iostream>

#include<fstream>
#include<vector>
#include<string>

using namespace std;

class Person
{
	int year;
	string first_name;
	string last_name;
	vector<string>fname;
	vector<int>fnamey;
	vector<string>lname;
	vector<int>lnamey;


public:

	void ChangeFirstName(int year,const string& First_name)
	{
		fnamey.push_back(year);
		fname.push_back(First_name);
	}

	void ChangeLastName(int year,const string& Last_name)
	{
		lname.push_back(Last_name);
		lnamey.push_back(year);
	}

	string GetFullName(int year)
	{
		string f = "null";
		string l = "null";
		for (int i = 0; i < fnamey.size(); ++i)
		{
			if (year >= fnamey[i])
			{
				f = fname[i];
			}
		}
		for(int i = 0;i<lnamey.size();++i)
		{
			if (year >= lnamey[i])
			{
				l = lname[i];
			}
		}
		if (f == "null" && l == "null")
		{
			return"Incognito";
		}
		if (f == "null")
		{
			return l + "with unknown first name";
		}
		if (l == "null")
		{
			return f + "with unknown last name";
		}
		return f + " " + l;
	}
};

