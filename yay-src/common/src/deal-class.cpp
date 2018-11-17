/*
 * deal-class.cpp
 *
 *  Created on: 17 нояб. 2018 г.
 *      Author: ksenia
 */

#include "deal-class.hpp"

using namespace std;

/* data_deadline shall be passed in form 'dd.mm.yyyy' */
Deal::Deal(string& name, string& descr, string& data_deadline)
{
	deal_name = name;
	description = descr;
	deadline = set_time(data_deadline);
}

struct tm Deal::set_time(string& format_string)
{
	struct tm ret;

}
