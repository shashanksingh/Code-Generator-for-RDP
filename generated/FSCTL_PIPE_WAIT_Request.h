/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_WAIT_Request.h
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

#ifndef FSCTL_PIPE_WAIT_Request_H
#define FSCTL_PIPE_WAIT_Request_H

class FSCTL_PIPE_WAIT_Request
{


public:
	FSCTL_PIPE_WAIT_Request();
	~FSCTL_PIPE_WAIT_Request();

	qint64 getTimeout();
	void setTimeout(qint64 value );

	quint32 getNameLength();
	void setNameLength(quint32 value );

	quint8 getTimeoutSpecified();
	void setTimeoutSpecified(quint8 value );

	quint8 getPadding();
	void setPadding(quint8 value );

	QByteArray getName();
	void setName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_Timeout;
	quint32 m_NameLength;
	quint8 m_TimeoutSpecified;
	quint8 m_Padding;
	QByteArray m_Name;

protected:


};

#endif