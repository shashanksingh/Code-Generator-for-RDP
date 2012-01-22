/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ENCRYPTION_Request.h
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

#ifndef FSCTL_SET_ENCRYPTION_Request_H
#define FSCTL_SET_ENCRYPTION_Request_H

class FSCTL_SET_ENCRYPTION_Request
{


public:
	FSCTL_SET_ENCRYPTION_Request();
	~FSCTL_SET_ENCRYPTION_Request();

	quint32 getEncryptionOperation();
	void setEncryptionOperation(quint32 value );

	quint8 getPrivate();
	void setPrivate(quint8 value );

	QByteArray getPadding();
	void setPadding(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_EncryptionOperation;
	quint8 m_Private;
	QByteArray m_Padding;

protected:


};

#endif