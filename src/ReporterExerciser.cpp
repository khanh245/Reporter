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
	Reporter* rep = Reporter::createReporter();
	rep->setOutput(MEMORY_OUTPUT);

	Reporter* rep2 = Reporter::createReporter();
	rep2->setOutput(FILE_OUTPUT);
	delete rep;
}

int main()
{
	cout << "Using reporter..." << endl;
	test();

	return 0;
}
