/*
 * FileStrat.h
 *
 *  Created on: May 27, 2014
 *      Author: khanhn
 */

#ifndef FILESTRAT_H_
#define FILESTRAT_H_

#include "IReportStrategy.h"

class FileStrat : public IReportStrategy
{
public:
	FileStrat();
	virtual ~FileStrat();

	bool write();
};

#endif /* FILESTRAT_H_ */
