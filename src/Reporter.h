/*
 * Reporter.h
 *
 *  Created on: Apr 28, 2014
 *      Author: khanhn
 */

#ifndef REPORTER_H_
#define REPORTER_H_

#include <iostream>
#include <string>

#include "ReportingStrategies/IReportStrategy.h"

using namespace std;

enum ReporterInfo
{
	DEBUG 		= 0x00,
	INFORMATION = 0x01,
	WARNING 	= 0x02,
	ERROR 		= 0x03,
	CRITICAL	= 0x04,
	ALERT		= 0x05,
	EMERGENCY	= 0xff
};

enum OutputMethod
{
	NONE = 0x00,
	FILE_OUTPUT = 0x01,
	MEMORY_OUTPUT = 0x02
};

class Reporter
{
public:
	static Reporter* createReporter();

	~Reporter();

	void setOutput (const OutputMethod& type = NONE);
	bool report();

protected:
	IReportStrategy* mReportStrat;

	void CleanUp();

private:
	Reporter();
	Reporter(const Reporter&);
	void operator=(const Reporter&);
};

#endif /* REPORTER_H_ */
