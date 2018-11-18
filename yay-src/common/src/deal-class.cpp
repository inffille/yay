/*
 * deal-class.cpp
 *
 *  Created on: 17 нояб. 2018 г.
 *      Author: ksenia
 */
#include <string.h>
#include <string>
#include <iostream>
#include "deal-class.hpp"

using namespace std;

/* data_deadline shall be passed in form 'yyyy-mm-dd hh:mm' */
Deal::Deal(const string& name, const string& descr, const string& data_deadline)
{
	deal_name = name;
	description = descr;
	deadline = set_time(data_deadline);
}

Deal::~Deal(){}

void Deal::print_deal_info()
{
	cout<<"Deal \"" << deal_name << "\" must be done by " <<
			deadline.tm_year + 1900 << "\n";
}

struct tm Deal::set_time(const string& date)
{
	struct tm ret;
	//fill ret with 0
	memset(&ret, 0, sizeof(struct tm));

	//YYYY-MM-DD HH:mm
	int year = stoi(date.substr(0,4));
	int month = stoi(date.substr(5,2));
	int day = stoi(date.substr(5,2));
	int hour = stoi(date.substr(5,2));
	int min = stoi(date.substr(5,2));

	//fill ret with parsed info
	ret.tm_year = year - 1900;
	ret.tm_mon = month - 1;
	ret.tm_mday = day + 1;
	ret.tm_hour = hour;
	ret.tm_min = min;
	ret.tm_isdst = -1;	//to use timezone data

	return ret;

}
