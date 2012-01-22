/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_WRITE_USN_CLOSE_RECORD_Request.h
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

#ifndef FSCTL_WRITE_USN_CLOSE_RECORD_Request_H
#define FSCTL_WRITE_USN_CLOSE_RECORD_Request_H

class FSCTL_WRITE_USN_CLOSE_RECORD_Request
{


public:
	FSCTL_WRITE_USN_CLOSE_RECORD_Request();
	~FSCTL_WRITE_USN_CLOSE_RECORD_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif