/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_OBJECT_ID_EXTENDED_Request.h
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

#ifndef FSCTL_SET_OBJECT_ID_EXTENDED_Request_H
#define FSCTL_SET_OBJECT_ID_EXTENDED_Request_H

class FSCTL_SET_OBJECT_ID_EXTENDED_Request
{


public:
	FSCTL_SET_OBJECT_ID_EXTENDED_Request();
	~FSCTL_SET_OBJECT_ID_EXTENDED_Request();

	QByteArray getExtendedInfo();
	void setExtendedInfo(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	QByteArray m_ExtendedInfo;

protected:


};

#endif