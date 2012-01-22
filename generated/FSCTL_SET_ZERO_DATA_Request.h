/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ZERO_DATA_Request.h
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

#ifndef FSCTL_SET_ZERO_DATA_Request_H
#define FSCTL_SET_ZERO_DATA_Request_H

class FSCTL_SET_ZERO_DATA_Request
{


public:
	FSCTL_SET_ZERO_DATA_Request();
	~FSCTL_SET_ZERO_DATA_Request();

	qint64 getFileOffset();
	void setFileOffset(qint64 value );

	qint64 getBeyondFinalZero();
	void setBeyondFinalZero(qint64 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_FileOffset;
	qint64 m_BeyondFinalZero;

protected:


};

#endif