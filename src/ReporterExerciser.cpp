/*
 * ReporterExerciser.cpp
 *
 *  Created on: Apr 28, 2014
 *      Author: khanhn
 */

#include <iostream>

#include "Reporter.h"

using namespace std;

void test()
{
	Reporter* rep = Reporter::getInstance();
	rep->setOutput(MEMORY_OUTPUT);

	Reporter* rep2 = Reporter::getInstance();
	delete rep;
}

int main()
{
	cout << "Using reporter..." << endl;
	test();

	return 0;
}
