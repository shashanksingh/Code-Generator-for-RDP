/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_SPARING_INFO_Request.h
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

#ifndef FSCTL_QUERY_SPARING_INFO_Request_H
#define FSCTL_QUERY_SPARING_INFO_Request_H

class FSCTL_QUERY_SPARING_INFO_Request
{


public:
	FSCTL_QUERY_SPARING_INFO_Request();
	~FSCTL_QUERY_SPARING_INFO_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif