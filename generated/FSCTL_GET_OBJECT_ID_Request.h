/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_OBJECT_ID_Request.h
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

#ifndef FSCTL_GET_OBJECT_ID_Request_H
#define FSCTL_GET_OBJECT_ID_Request_H

class FSCTL_GET_OBJECT_ID_Request
{


public:
	FSCTL_GET_OBJECT_ID_Request();
	~FSCTL_GET_OBJECT_ID_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif