/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_PEEK_Reply.h
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

#ifndef FSCTL_PIPE_PEEK_Reply_H
#define FSCTL_PIPE_PEEK_Reply_H

class FSCTL_PIPE_PEEK_Reply
{


public:
	FSCTL_PIPE_PEEK_Reply();
	~FSCTL_PIPE_PEEK_Reply();

	quint32 getNamedPipeState();
	void setNamedPipeState(quint32 value );

	quint32 getReadDataAvailable();
	void setReadDataAvailable(quint32 value );

	quint32 getNumberOfMessages();
	void setNumberOfMessages(quint32 value );

	quint32 getMessageLength();
	void setMessageLength(quint32 value );

	QByteArray getData();
	void setData(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_NamedPipeState;
	quint32 m_ReadDataAvailable;
	quint32 m_NumberOfMessages;
	quint32 m_MessageLength;
	QByteArray m_Data;

protected:


};

#endif