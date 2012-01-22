/*
 * =====================================================================================
 *
 *       Filename:  DECRYPTION_STATUS_BUFFER.h
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

#ifndef DECRYPTION_STATUS_BUFFER_H
#define DECRYPTION_STATUS_BUFFER_H

class DECRYPTION_STATUS_BUFFER
{


public:
	DECRYPTION_STATUS_BUFFER();
	~DECRYPTION_STATUS_BUFFER();

	quint8 getNoEncryptedStreams();
	void setNoEncryptedStreams(quint8 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint8 m_NoEncryptedStreams;

protected:


};

#endif