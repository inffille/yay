#include <iostream>
#include "deal-class.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	Deal dd("buy it", "please", "2013-09-09 08:34");
	dd.print_deal_info();
	return 0;
}
