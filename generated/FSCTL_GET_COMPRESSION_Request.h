/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_COMPRESSION_Request.h
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

#ifndef FSCTL_GET_COMPRESSION_Request_H
#define FSCTL_GET_COMPRESSION_Request_H

class FSCTL_GET_COMPRESSION_Request
{


public:
	FSCTL_GET_COMPRESSION_Request();
	~FSCTL_GET_COMPRESSION_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif