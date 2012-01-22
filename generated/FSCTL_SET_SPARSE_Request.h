/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_SPARSE_Request.h
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

#ifndef FSCTL_SET_SPARSE_Request_H
#define FSCTL_SET_SPARSE_Request_H

class FSCTL_SET_SPARSE_Request
{


public:
	FSCTL_SET_SPARSE_Request();
	~FSCTL_SET_SPARSE_Request();

	quint8 getSetSparse();
	void setSetSparse(quint8 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint8 m_SetSparse;

protected:


};

#endif