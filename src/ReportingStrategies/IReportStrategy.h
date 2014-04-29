/*
 * BaseReportStrategy.h
 *
 *  Created on: Apr 28, 2014
 *      Author: khanhn
 */

#ifndef BASEREPORTSTRATEGY_H_
#define BASEREPORTSTRATEGY_H_

class IReportStrategy
{
public:
	virtual ~IReportStrategy() { }
	virtual bool write() = 0;

protected:
	char* mData;
};


#endif /* BASEREPORTSTRATEGY_H_ */
