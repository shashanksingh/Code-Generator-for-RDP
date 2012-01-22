/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_FIND_FILES_BY_SID_Request.h
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

#ifndef FSCTL_FIND_FILES_BY_SID_Request_H
#define FSCTL_FIND_FILES_BY_SID_Request_H

class FSCTL_FIND_FILES_BY_SID_Request
{


public:
	FSCTL_FIND_FILES_BY_SID_Request();
	~FSCTL_FIND_FILES_BY_SID_Request();

	quint32 getRestart();
	void setRestart(quint32 value );

	QByteArray getsID();
	void setsID(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_Restart;
	QByteArray m_sID;

protected:


};

#endif