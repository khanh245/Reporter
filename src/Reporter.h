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
using namespace std;

enum ReporterInfo
{
	INFORMATION = 0x00,
	WARNING = 0x01,
	ERROR = 0xff
};

class Reporter {
public:
	Reporter();
	virtual ~Reporter();
};

#endif /* REPORTER_H_ */
