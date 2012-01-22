/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_RETRIEVAL_POINTERS_Reply.h
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

#ifndef FSCTL_GET_RETRIEVAL_POINTERS_Reply_H
#define FSCTL_GET_RETRIEVAL_POINTERS_Reply_H

class FSCTL_GET_RETRIEVAL_POINTERS_Reply
{


public:
	FSCTL_GET_RETRIEVAL_POINTERS_Reply();
	~FSCTL_GET_RETRIEVAL_POINTERS_Reply();

	qint64 getNextVcn();
	void setNextVcn(qint64 value );

	qint64 getLcn();
	void setLcn(qint64 value );

	quint32 getPathNameLength();
	void setPathNameLength(quint32 value );

	QByteArray getPathName();
	void setPathName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_NextVcn;
	qint64 m_Lcn;
	quint32 m_PathNameLength;
	QByteArray m_PathName;

protected:


};

#endif