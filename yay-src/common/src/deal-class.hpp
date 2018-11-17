/*
 * deal-class.hpp
 *
 *  Created on: 17 нояб. 2018 г.
 *      Author: ksenia
 */
#include <time.h>

#ifndef DEAL_CLASS_HPP_
#define DEAL_CLASS_HPP_

class Deal{
//	struct tm date_of_creation;
	struct tm set_time(std::string& format_string);
public:
	std::string deal_name;
	std::string description;
	struct tm deadline;

	Deal(std::string& name, std::string& descr, std::string& data_deadline);
	~Deal();
};


#endif /* DEAL_CLASS_HPP_ */
