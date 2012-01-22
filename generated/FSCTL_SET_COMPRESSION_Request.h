/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_COMPRESSION_Request.h
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

#ifndef FSCTL_SET_COMPRESSION_Request_H
#define FSCTL_SET_COMPRESSION_Request_H

class FSCTL_SET_COMPRESSION_Request
{


public:
	FSCTL_SET_COMPRESSION_Request();
	~FSCTL_SET_COMPRESSION_Request();

	quint16 getCompressionState();
	void setCompressionState(quint16 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint16 m_CompressionState;

protected:


};

#endif