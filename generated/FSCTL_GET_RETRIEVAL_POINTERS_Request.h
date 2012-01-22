/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_RETRIEVAL_POINTERS_Request.h
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

#ifndef FSCTL_GET_RETRIEVAL_POINTERS_Request_H
#define FSCTL_GET_RETRIEVAL_POINTERS_Request_H

class FSCTL_GET_RETRIEVAL_POINTERS_Request
{


public:
	FSCTL_GET_RETRIEVAL_POINTERS_Request();
	~FSCTL_GET_RETRIEVAL_POINTERS_Request();

	qint64 getStartingVcn();
	void setStartingVcn(qint64 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_StartingVcn;

protected:


};

#endif