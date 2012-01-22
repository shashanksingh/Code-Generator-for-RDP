/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_ALLOCATED_RANGES_Request.h
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

#ifndef FSCTL_QUERY_ALLOCATED_RANGES_Request_H
#define FSCTL_QUERY_ALLOCATED_RANGES_Request_H

class FSCTL_QUERY_ALLOCATED_RANGES_Request
{


public:
	FSCTL_QUERY_ALLOCATED_RANGES_Request();
	~FSCTL_QUERY_ALLOCATED_RANGES_Request();

	qint64 getFileOffset();
	void setFileOffset(qint64 value );

	qint64 getLength();
	void setLength(qint64 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_FileOffset;
	qint64 m_Length;

protected:


};

#endif