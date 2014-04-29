/*
 * Reporter.cpp
 *
 *  Created on: Apr 28, 2014
 *      Author: khanhn
 */

#include "Reporter.h"
#include "ReportingStrategies/Strategies.h"

Reporter* Reporter::getInstance()
{
	static Reporter* uniqueInstance;
	if (uniqueInstance == NULL)
		uniqueInstance = new Reporter();

	return uniqueInstance;
}

Reporter::Reporter()	:
	mReportStrat(0)
{ }

Reporter::~Reporter()
{
	CleanUp();
}

void Reporter::setOutput(const OutputType& type)
{
	CleanUp();

	switch(type)
	{
	case FILE_OUTPUT:

		break;
	case MEMORY_OUTPUT:
		mReportStrat = new MemoryStrat();
		break;
	default:
		cerr << "Output type hasn't been specified." << endl;
		break;
	}
}

void Reporter::CleanUp()
{
	if (mReportStrat != 0)
		delete mReportStrat;

	mReportStrat = 0;
}

bool Reporter::report()
{
	if (!mReportStrat->write())
		throw ERROR;

	return true;
}
