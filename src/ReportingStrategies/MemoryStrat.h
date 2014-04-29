/*
 * MemoryStrat.h
 *
 *  Created on: Apr 29, 2014
 *      Author: khanhn
 */

#ifndef MEMORYSTRAT_H_
#define MEMORYSTRAT_H_

#include "IReportStrategy.h"

class MemoryStrat	:	public IReportStrategy
{
public:
	MemoryStrat();
	virtual ~MemoryStrat();

	bool write();
};

#endif /* MEMORYSTRAT_H_ */
