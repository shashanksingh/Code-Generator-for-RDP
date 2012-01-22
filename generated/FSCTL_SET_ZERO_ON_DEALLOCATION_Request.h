/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ZERO_ON_DEALLOCATION_Request.h
 *
 *        Version:  1.0
 *        Created:  25/06/2011 06:54:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:
 *        Company:  Devon IT
 *
 * =====================================================================================
 */

#ifndef FSCTL_SET_ZERO_ON_DEALLOCATION_Request_H
#define FSCTL_SET_ZERO_ON_DEALLOCATION_Request_H

class FSCTL_SET_ZERO_ON_DEALLOCATION_Request
{


public:
	FSCTL_SET_ZERO_ON_DEALLOCATION_Request();
	~FSCTL_SET_ZERO_ON_DEALLOCATION_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif