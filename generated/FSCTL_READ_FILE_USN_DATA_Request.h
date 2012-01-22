/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_READ_FILE_USN_DATA_Request.h
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

#ifndef FSCTL_READ_FILE_USN_DATA_Request_H
#define FSCTL_READ_FILE_USN_DATA_Request_H

class FSCTL_READ_FILE_USN_DATA_Request
{


public:
	FSCTL_READ_FILE_USN_DATA_Request();
	~FSCTL_READ_FILE_USN_DATA_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif